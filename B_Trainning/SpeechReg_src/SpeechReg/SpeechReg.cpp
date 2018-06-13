// SpeechReg.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"

#include <objbase.h>
#include <initguid.h>
#include <objerror.h>
#include <ole2ver.h>

#include <speech.h>







HINSTANCE         ghInstance;                // instance handle
HWND              ghwndResultsDisplay = NULL;
HWND              ghwndDialog = NULL;
HWND              m_hwnd;
HWND              hWnd;
PIVOICECMD        gpIVoiceCommand = NULL;
PIVCMDDIALOGS     gpIVCmdDialogs = NULL;
PIVCMDMENU        gpIVCmdMenu = NULL;



char  gszDefaultSet[] = // default command set
   "Help\r\n"
   "Minimize window.\r\n"
   "Maximize window.\r\n"
   "What time is it?\r\n"
   "What day is it?\r\n"
   "Create a new file.\r\n"
   "Delete the current file\r\n"
   "Open a file\r\n"
   "Word\r\n"
   "Switch to Excel.\r\n"
   "Calculator.\r\n"
   "Change the background color.\r\n"
   "Go to sleep.\r\n"
   "Wake up.\r\n"
   "Print the document.\r\n"
   "Speak the text.\r\n"
   "Paste\r\n"
   "Copy\r\n";
char              *gpszCommands = NULL; // Commands
char              *gpszCurCommand = NULL;  // current command that looking at

BOOL BeginOLE();
BOOL GetCommands(char *pszMemory, PSDATA pData, DWORD *pdwNumCommands);
CHAR * NextCommand (CHAR *pszMemory, PCHAR *pBegin, DWORD *pdwSize);
HRESULT UseCommands (char *pszCommands, PIVCMDMENU pMenu);
BOOL CALLBACK ChangeProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


// Voice Command notifications

class CIVCmdNotifySink : public IVCmdNotifySink {
    private:
    DWORD   m_dwRefCnt;
    

    public:
    CIVCmdNotifySink(void);
    ~CIVCmdNotifySink(void);

    // IUnkown members that delegate to m_punkOuter
    // Non-delegating object IUnknown
    STDMETHODIMP         QueryInterface (REFIID, LPVOID FAR *);
    STDMETHODIMP_(ULONG) AddRef(void);
    STDMETHODIMP_(ULONG) Release(void);

    // IVCmdNotifySink members
    STDMETHODIMP CommandRecognize (DWORD, PVCMDNAME, DWORD, DWORD, PVOID, DWORD, PSTR, PSTR);
    STDMETHODIMP CommandOther     (PVCMDNAME, PTSTR);
	STDMETHODIMP CommandStart     (void);
    STDMETHODIMP MenuActivate     (PVCMDNAME, BOOL);
    STDMETHODIMP UtteranceBegin   (void);
    STDMETHODIMP UtteranceEnd     (void);
    STDMETHODIMP VUMeter          (WORD);
    STDMETHODIMP AttribChanged    (DWORD);
	STDMETHODIMP Interference     (DWORD);
};
typedef CIVCmdNotifySink * PCIVCmdNotifySink;


BOOL CALLBACK DialogProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_INITDIALOG:
		
		ghwndDialog=hWnd;
		ghwndResultsDisplay = GetDlgItem (hWnd, IDC_EDIT2);
		SetDlgItemText(hWnd,IDC_EDIT1,gszDefaultSet);
		if (UseCommands (gpszCommands, gpIVCmdMenu))
         return 1;   // error
	
		return 0;
	case WM_COMMAND:
		 switch (LOWORD(wParam))
		 {
		 case IDOK:
			 
			   EndDialog (hWnd, IDOK);
			 
			 return 0;
		 case IDC_ADD:
			 {
				 DialogBox (ghInstance, MAKEINTRESOURCE(IDD_ADD),
                  hWnd, (DLGPROC) ChangeProc);
				 SetDlgItemText(hWnd,IDC_EDIT1,gpszCommands);
               return TRUE;
			 }

		 case IDC_TRAIN:
               gpIVCmdDialogs->TrainGeneralDlg (hWnd, NULL);
               return TRUE;

			 return 0;
		 }
	
	}


               
	return 0;
}
int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 
	BeginOLE();
	// Create a menu out of the default
    gpszCommands = (char*) malloc (strlen(gszDefaultSet)+1);

	gpszCommands = (char*) malloc (strlen(gszDefaultSet)+1);
    if (!gpszCommands)
		return 1;
	strcpy (gpszCommands, gszDefaultSet);
	gpszCurCommand = gpszCommands;
	DialogBox (hInstance, MAKEINTRESOURCE(IDD_VCMD),
      NULL, (DLGPROC) DialogProc);
	
	return 0;
}


BOOL BeginOLE()
{
	HRESULT  hRes;
	VCMDNAME VcmdName;
	LANGUAGE Language;
	PCIVCmdNotifySink gpVCmdNotifySink = NULL;
	PIVCMDATTRIBUTES  pIVCmdAttributes;
	SetMessageQueue(96);

	CoInitialize(NULL);
		

	// Create the voice commands object
	hRes=CoCreateInstance(CLSID_VCmd, NULL, CLSCTX_LOCAL_SERVER, IID_IVoiceCmd, (LPVOID *)&gpIVoiceCommand);
	

	// Get the dialogs interface pointer...
	hRes = gpIVoiceCommand->QueryInterface( IID_IVCmdDialogs, (LPVOID FAR *)&gpIVCmdDialogs );
	

	// Get the attributes interface pointer...
    //	hRes = gpIVoiceCommand->QueryInterface( IID_IVCmdAttributes, (LPVOID FAR *)&gpIVCmdAttr );


	// Create/Register VCmd notification sink...
	gpVCmdNotifySink = new CIVCmdNotifySink;
	

	hRes = gpIVoiceCommand->Register( "", gpVCmdNotifySink, IID_IVCmdNotifySink, VCMDRF_ALLMESSAGES, NULL );
	

	if(FAILED(hRes))
		MessageBox(m_hwnd,"Error in registering","Speech Reg",MB_OK);

	//The following code checks for a navigator app and 
    //checks the state of voice commands

    hRes = gpIVoiceCommand->QueryInterface(IID_IVCmdAttributes, (LPVOID FAR *)&pIVCmdAttributes);
	if (pIVCmdAttributes) 
	{
		pIVCmdAttributes->EnabledSet( TRUE );
  		pIVCmdAttributes->AwakeStateSet( TRUE );

		pIVCmdAttributes->Release();
	};

	// Initialize command menu set variables...
	lstrcpy(VcmdName.szApplication, "Speech Reg");
	lstrcpy(VcmdName.szState, "Main");
	Language.LanguageID = LANG_ENGLISH;
	lstrcpy (Language.szDialect, "US English");

	// Create an empty command menu set...
	hRes = gpIVoiceCommand->MenuCreate( &VcmdName, &Language, VCMDMC_CREATE_TEMP, &gpIVCmdMenu );
	if( FAILED(hRes) ) 
	    MessageBox(m_hwnd,"Failed to create a voice command set with MenuCreate()", "Speech Reg",MB_OK);

	
	return TRUE;
}

/*
 Closes up OLE and frees everything else.
*/
BOOL EndOLE()
{
	
	
	// Free up all of OLE
	CoUninitialize();

	return TRUE;
}



/**************************************************************************
 *  Voice Command notification objects
 **************************************************************************/

CIVCmdNotifySink::CIVCmdNotifySink (void)
{
    m_dwRefCnt = 0;
}

CIVCmdNotifySink::~CIVCmdNotifySink (void)
{
}

STDMETHODIMP CIVCmdNotifySink::QueryInterface (REFIID riid, LPVOID *ppv)
{
	*ppv = NULL;

    /* always return our IUnkown for IID_IUnknown */
    if (IsEqualIID (riid, IID_IUnknown) || IsEqualIID(riid,IID_IVCmdNotifySink)) {
        *ppv = (LPVOID) this;
        return NOERROR;
    }

    // otherwise, cant find
    return ResultFromScode (E_NOINTERFACE);
}

STDMETHODIMP_ (ULONG) CIVCmdNotifySink::AddRef (void)
{
    // normally this increases a reference count, but this object
    // is going to be freed as soon as the app is freed, so it doesn't
    // matter
    return 1;
}

STDMETHODIMP_(ULONG) CIVCmdNotifySink::Release (void)
{
	// normally this releases a reference count, but this object
    // is going to be freed when the application is freed so it doesnt
    // matter
    return 1;
}

/*
 Handle recognition notification.

 Inputs:
 dwID         - Id of this instance of Voice command object.
 pName        - 
 dwFlags      -
 dwActionSize -
 pAction      - The index of the command in the command list (1 based).
 dwNumLists   -
 pszListValue - 
 pszCommand   - 
*/



STDMETHODIMP CIVCmdNotifySink::CommandRecognize(DWORD dwID, PVCMDNAME pName,
   DWORD dwFlags, DWORD dwActionSize, PVOID pAction, DWORD dwNumLists,
   PSTR pszListValues, PSTR pszCommand)
{
// This is called when a recognition occurs for the current application

if (!lstrcmp(pszCommand, "calculator"))
        WinExec("calc.exe", SW_SHOWNORMAL);
	if (!ghwndResultsDisplay)
		return NOERROR;
	 SetWindowText (ghwndResultsDisplay,pszCommand ? pszCommand : "[Unrecognized]");

return NOERROR;
}

STDMETHODIMP CIVCmdNotifySink::CommandOther(PVCMDNAME pName, PTSTR pszCommand)
{
	 if (!lstrcmp(pszCommand, "calculator"))
        WinExec("calc.exe", SW_SHOWNORMAL);
	if (!ghwndResultsDisplay)
		return NOERROR;
	 SetWindowText (ghwndResultsDisplay,pszCommand ? pszCommand : "[Unrecognized]");
	
	return NOERROR;
}


/*
 Handle notifiaction sent when recognition begins.
*/
STDMETHODIMP CIVCmdNotifySink::CommandStart(void)
{
	return NOERROR;
}

/*
 Handle notification sent when the menu is activated/deactivated.
*/
STDMETHODIMP CIVCmdNotifySink::MenuActivate(PVCMDNAME pName, BOOL bActivate)
{
	return NOERROR;
}

/*
 Handle notification sent when the attribute is changed.
*/
STDMETHODIMP CIVCmdNotifySink::AttribChanged(DWORD dwAttribute)
{
	return NOERROR;
}

/*
 Handle notification sent when the recognizer detects the beginning of an utterance.
*/
STDMETHODIMP CIVCmdNotifySink::UtteranceBegin(void)
{
		
	return NOERROR;
}

/*
 Handle notification sent when the recognizer detects the end of an utterance.
*/
STDMETHODIMP CIVCmdNotifySink::UtteranceEnd()
{
	// if we're not in wide mode, indicate the status to the user
	// by changing the window title...
	
	return NOERROR;
}

/*
 Handle notification sent to indicate amplitude of incoming audio data.
*/
STDMETHODIMP CIVCmdNotifySink::VUMeter(WORD wLevel)
{
	// paint the view meter abse3d on data from notification...


	return NOERROR;
}

/*
 Handle notification sent when the recognizer detects interference
*/
STDMETHODIMP CIVCmdNotifySink::Interference(DWORD dwType)
{
	return NOERROR;
}

HRESULT UseCommands (char *pszCommands, PIVCMDMENU pMenu)
{
    HRESULT hRes;
    SDATA   data;
    DWORD   dwNum, dwStart;
    hRes = pMenu->Deactivate(); // deactivate the menu
    if (hRes) return hRes;
    // Retrieve the number of commands in the menu.
    hRes = pMenu->Num(&dwNum);
    if (hRes) return hRes;
    // Remove the existing commands from the menu.
    if (dwNum)
       hRes = pMenu->Remove (1, dwNum, VCMD_BY_POSITION);
    if (hRes) return hRes;
    // Call GetCommands, an application-defined function that fills an SDATA
    // structure with information about the commands to add to the menu.
    if (!GetCommands(pszCommands, &data, &dwNum))
       return ResultFromScode (E_OUTOFMEMORY);
    // Add the commands to the menu.
    hRes = pMenu->Add (dwNum, data, &dwStart);
    if (hRes) return hRes;
    // Free the command data.
    free (data.pData);
    // Reactivate the menu.
    hRes = pMenu->Activate(hWnd, 0);
    return hRes;
}

BOOL GetCommands(char *pszMemory, PSDATA pData, DWORD *pdwNumCommands)
{
    PSTR pTemp;
    DWORD dwTotal, dwSize, dwSizeDesc, dwSizeCat;
    DWORD dwSizeCmd;
    PVCMDCOMMAND pCmd, pCmdNew;
    CHAR    *pszBegin;
    DWORD   dwCmdSize;
    DWORD   dwCmds = 0;  // Current count
    DWORD   dwCount = 1; // Command number
    char    szCat[] = "Main";

    dwTotal = dwSize = 0;

    pTemp = (PSTR)malloc(0);
    if (!pTemp)
        return FALSE;

    pCmd = (PVCMDCOMMAND)pTemp;
    for( ;; ) {
        pszMemory = NextCommand (pszMemory, &pszBegin, &dwCmdSize);
        if (!pszMemory)
            break;   // no more

        // size of header
        dwSize = sizeof(VCMDCOMMAND);

        // get command length
        dwSizeCmd = (dwCmdSize + 1);

        // doubleword align
        dwSizeCmd += 3;
        dwSizeCmd &= (~3);
        dwSize += dwSizeCmd;

        // get description length
        dwSizeDesc = (dwCmdSize + 1);

        // doubleword align
        dwSizeDesc += 3;
        dwSizeDesc &= (~3);
        dwSize += dwSizeDesc;

        // get category length
        dwSizeCat = lstrlen(szCat) + 1;

        // doubleword align
        dwSizeCat += 3;
        dwSizeCat &= (~3);
        dwSize += dwSizeCat;

        // action indicator
        dwSize += sizeof(DWORD);

        // accumulate total size
        dwTotal += dwSize;

        // reallocate enough memory to hold this command
        pTemp = (PSTR)realloc((PVOID)pCmd, dwTotal);

        // fill in the new command
        pCmd = (PVCMDCOMMAND)pTemp;
        pTemp += (dwTotal-dwSize);
        pCmdNew = (PVCMDCOMMAND)pTemp;
        memset (pCmdNew, 0, dwSize);

        pCmdNew->dwSize = dwSize;
        pCmdNew->dwFlags = 0;
        pCmdNew->dwAction = (DWORD)(pCmdNew->abData-(PBYTE)pTemp);
        pCmdNew->dwActionSize = sizeof(DWORD);
        pCmdNew->dwCommandText = NULL;

        // point past header to begin of data
        pTemp += (pCmdNew->abData-(PBYTE)pTemp);

        // action index
        *(DWORD *)pTemp = dwCount++;
        pTemp += sizeof(DWORD);

        // command
        pCmdNew->dwCommand = (DWORD)((PBYTE)pTemp - (PBYTE)pCmdNew);
        strncpy(pTemp, pszBegin, dwCmdSize);
        pTemp += dwSizeCmd;

        // description
        pCmdNew->dwDescription = (DWORD)((PBYTE)pTemp - (PBYTE)pCmdNew);
        strncpy(pTemp, pszBegin, dwCmdSize);
        pTemp += dwSizeDesc;

        // category
        pCmdNew->dwCategory = (DWORD)((PBYTE)pTemp - (PBYTE)pCmdNew);
        strcpy(pTemp, szCat);

        // we just added another command
        dwCmds++;
    }

    pData->pData = (PVOID)pCmd;
    pData->dwSize = dwTotal;
    *pdwNumCommands = dwCmds;
    return TRUE;
}

CHAR * NextCommand (CHAR *pszMemory, PCHAR *pBegin, DWORD *pdwSize)
{
    DWORD i;
    for( ;; ) {
        // Try to find a non-newline character.
        while ((*pszMemory == '\n') || (*pszMemory == '\r')) {
            if (*pszMemory == '\0')
                return NULL;
            pszMemory++;
        };
    // Try to find a newline character.
    for (i = 0;
        (pszMemory[i] != '\n') && (pszMemory[i] != '\r') &&
            (pszMemory[i] != '\0'); i++);
    if (!i) {
        if (!pszMemory[i])
            return NULL; // end
        pszMemory++;
        continue;        // try again
      };
    // A string was found. Return it.
    *pBegin = pszMemory;
    *pdwSize = i;
    return pszMemory + i;
    };
}

BOOL CALLBACK ChangeProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch(uMsg)
	{
	case WM_INITDIALOG:
		SetDlgItemText (hWnd, IDC_ADDEDIT, gpszCommands);
        return 0;
	case WM_COMMAND:
		switch(LOWORD(wParam))
		{
		case IDOK:
		       char     *pszNew;
               DWORD    dwSize;
               // Throw out the old buffer & copy the
               // new one in. The set us to use it
               pszNew = (char*) malloc (dwSize =
                  GetWindowTextLength(GetDlgItem(hWnd, IDC_ADDEDIT)) + 1);
               if (pszNew) 
			   {
                  GetDlgItemText (hWnd, IDC_ADDEDIT, pszNew, dwSize);
                  free (gpszCommands);
                  gpszCommands = pszNew;
                  gpszCurCommand = pszNew;
                  if (UseCommands (gpszCommands, gpIVCmdMenu))
                     return 1;   // error

               }
			 EndDialog (hWnd, IDOK);
		case IDCANCEL:
			EndDialog(hWnd,IDCANCEL);
		}
	}
	
	return 0;
}

