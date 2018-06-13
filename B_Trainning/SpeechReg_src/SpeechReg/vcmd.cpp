/******************************************************************************
*       This module contains functions which handle interaction with the Voice 
*       Command and Voice Messages interface.
*
*       This code and information is provided "as is" without warranty
*       of any kind, either expressed or implied, including but not
*       limited to the implied warranties of merchantability and/or
*       fitness for a particular purpose.
*
Copyright (c) 1995-1998 by Microsoft Corporation

 *
 *  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
 *  ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
 *  TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR
 *  A PARTICULAR PURPOSE.
 *
*/




#include "vcmd.h"

PCIVCmdNotifySink gpVCmdNotifySink = NULL;
PCIVTxtNotifySink gpVTxtNotifySink = NULL;
PIVOICECMD        gpIVoiceCommand  = NULL;
PIVCMDDIALOGS     gpIVCmdDialogs   = NULL;
PIVCMDMENU        gpIVCmdMenu      = NULL;
PIVCMDATTRIBUTES  gpIVCmdAttr      = NULL;
PIVOICETEXT		  gpIVTxt          = NULL;
PIVTXTATTRIBUTES  gpIVTxtAttr      = NULL;
UINT              uTimerID = 0;
DWORD             gdwShowReEnable;


/*
 Begin OLE and create the interface pointers and an empty menu object.

returns
   BOOL - TRUE if is succedes, FALSE if error.
*/
BOOL BeginOLE()
{
	HRESULT  hRes;
	VCMDNAME VcmdName;
	LANGUAGE Language;

	SetMessageQueue(96);

	if( FAILED(CoInitialize(NULL)) )
		return ReleaseInterfaces( "CoInitialize() failed." );

	// Create the voice commands object
	if(CoCreateInstance(CLSID_VCmd, NULL, CLSCTX_LOCAL_SERVER, IID_IVoiceCmd, (LPVOID *)&gpIVoiceCommand) != S_OK)
		return ReleaseInterfaces("Error in CoCreateInstance() for VCmd interface." );

	// Get the dialogs interface pointer...
	hRes = gpIVoiceCommand->QueryInterface( IID_IVCmdDialogs, (LPVOID FAR *)&gpIVCmdDialogs );
	if( FAILED(hRes) ) return ReleaseInterfaces( "QueryInterface() failed to obtain VCmd Dialogs interface." );

	// Get the attributes interface pointer...
	hRes = gpIVoiceCommand->QueryInterface( IID_IVCmdAttributes, (LPVOID FAR *)&gpIVCmdAttr );
	if( FAILED(hRes) ) return ReleaseInterfaces( "QueryInterface() failed to obtain VCmd Attributes interface." );

	// Create/Register VCmd notification sink...
	gpVCmdNotifySink = new CIVCmdNotifySink;
	if( gpVCmdNotifySink == NULL )
		return ReleaseInterfaces( "Out of memory for Voice notification object." );

	hRes = gpIVoiceCommand->Register( "", gpVCmdNotifySink, IID_IVCmdNotifySink, VCMDRF_ALLMESSAGES, NULL );
	if( FAILED(hRes) )
		return ReleaseInterfaces( "Failed to Register() Voice notification sink." );

	// Initialize command menu set variables...
/*	lstrcpy(VcmdName.szApplication, "SR Clock Demo");
	lstrcpy(VcmdName.szState, "Main");
	Language.LanguageID = LANG_ENGLISH;
	lstrcpy (Language.szDialect, "US English");

	// Create an empty command menu set...
	hRes = gpIVoiceCommand->MenuCreate( &VcmdName, &Language, VCMDMC_CREATE_TEMP, &gpIVCmdMenu );
	if( FAILED(hRes) ) return ReleaseInterfaces( "Failed to create a voice command set with MenuCreate()" );

	// Create a voice text object...
	if(CoCreateInstance(CLSID_VTxt, NULL, CLSCTX_LOCAL_SERVER, IID_IVoiceText, (LPVOID *)&gpIVTxt) != S_OK)
		return ReleaseInterfaces("Error in CoCreateInstance() for Text-To-Speech interface." );

	// Get the attributes interface pointer...
	hRes = gpIVTxt->QueryInterface( IID_IVTxtAttributes, (LPVOID FAR *)&gpIVTxtAttr );
	if( FAILED(hRes) ) return ReleaseInterfaces( "QueryInterface() failed to obtain VTxt Attributes interface." );

	// Create/Register VTxt notification sink...
	gpVTxtNotifySink = new CIVTxtNotifySink;
	if( gpVTxtNotifySink == NULL )
		return ReleaseInterfaces( "Out of memory for VTxt notification object." );

	hRes = gpIVTxt->Register( NULL, "SRClock", gpVTxtNotifySink, IID_IVTxtNotifySink, VTXTF_ALLMESSAGES, NULL);
	if( FAILED(hRes) )
		return ReleaseInterfaces( "Failed to Register() VTxt notification sink." );

  */

	return TRUE;
}

/*
 Closes up OLE and frees everything else.
*/
BOOL EndOLE()
{
	// free our list of cities/time-zone bias data...
	free( gCityList );

	ReleaseInterfaces( "" );

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
STDMETHODIMP CIVCmdNotifySink::CommandRecognize(DWORD dwID, PVCMDNAME pName, DWORD dwFlags,
   DWORD dwActionSize, PVOID pAction, DWORD dwNumLists, PTSTR pszListValues, PTSTR pszCommand)
{

	
	MessageBox(hWnd,"SpeechReg",pszCommand ? pszCommand : "[Unrecognized]",MB_OK);

	return NOERROR;
}


 STDMETHODIMP CIVCmdNotifySink::CommandOther(PVCMDNAME pName, PTSTR pszCommand)
{
	MessageBox(hWnd,"SpeechReg",pszCommand ? pszCommand : "[Unrecognized]",MB_OK);

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


