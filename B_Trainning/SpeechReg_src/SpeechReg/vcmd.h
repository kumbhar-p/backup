/******************************************************************************\
*       This code and information is provided "as is" without warranty
*       of any kind, either expressed or implied, including but not
*       limited to the implied warranties of merchantability and/or
*       fitness for a particular purpose.
*
*       Copyright (C) 1995 Microsoft Corporation.  All Rights Reserved.
*
\******************************************************************************/



// Voice Command notifications
class CIVCmdNotifySink : public IVCmdNotifySink {
    private:
    DWORD   m_dwRefCnt;
    HWND    m_hwnd;
	
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

BOOL BeginOLE();
BOOL EndOLE();
