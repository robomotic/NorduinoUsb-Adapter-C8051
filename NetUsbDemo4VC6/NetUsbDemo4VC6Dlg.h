// NetUsbDemo4VC6Dlg.h : header file
/*  This file is part of NetUsbDemo.
    NetUsbDemo is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    NetUsbDemo  is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.

    Author: Paolo & Elio @ www.norduino.com
    Copyright Robomotic 2011

*/

#if !defined(AFX_NETUSBDEMO4VC6DLG_H__E4AD30BB_D760_4E42_909C_17F3C7ED9B44__INCLUDED_)
#define AFX_NETUSBDEMO4VC6DLG_H__E4AD30BB_D760_4E42_909C_17F3C7ED9B44__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/////////////////////////////////////////////////////////////////////////////
// CNetUsbDemo4VC6Dlg dialog

class CNetUsbDemo4VC6Dlg : public CDialog
{


// Construction
public:
	CNetUsbDemo4VC6Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CNetUsbDemo4VC6Dlg)
	enum { IDD = IDD_NETUSBDEMO4VC6_DIALOG };
	CButton	m_btntx2;
	CButton	m_btntx1;
	CButton	m_btnrx2;
	CButton	m_btnrx1;
	CButton	m_btnlink;
	CButton	m_btnfre2;
	CButton	m_btnfre1;
	CButton	m_btnclr;
	CStatic	m_status;
	CButton	m_led2;
	CButton	m_led1;
	CListBox	m_RecivedData;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetUsbDemo4VC6Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CNetUsbDemo4VC6Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	afx_msg void OnBnClickedBtnLed1();
	afx_msg void OnBnClickedBtnLed2();
	afx_msg void OnBnClickedBtnLink();
	afx_msg void OnBnClickedBtnClr();
	afx_msg void OnButtonTx1();
	afx_msg void OnButtonTx2();
	afx_msg void OnButtonRx1();
	afx_msg void OnButtonRx2();
	afx_msg void OnButtonFre1();
	afx_msg void OnButtonFre2();
	//}}AFX_MSG

	/************************************************************************/
	/* Functions and/or datas are not defined by system                                                                     */
	/************************************************************************/
public:
	BOOL OnDeviceChange(UINT nEventType, DWORD dwData);
	void AttemptConnection(void);
	void AddRecievedData(CString NewData);
	void DisableLedButton();
	void EnableLedButton();
	LRESULT OnNewMsg (WPARAM wParam, LPARAM lParam);
	void HIDcallback (BYTE* reportbuffer);
	//static void  TheCallbackFunc(unsigned char* buf, size_t n);
	static DWORD WINAPI InterruptThreadProc(LPVOID lpParameter);

public:
	HANDLE HID_RX_THREAD;
	bool RXthreadmaycontinue;
	bool m_IsConnected;

	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NETUSBDEMO4VC6DLG_H__E4AD30BB_D760_4E42_909C_17F3C7ED9B44__INCLUDED_)
