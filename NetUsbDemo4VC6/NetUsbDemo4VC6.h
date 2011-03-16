// NetUsbDemo4VC6.h : main header file for the NETUSBDEMO4VC6 application
//

#if !defined(AFX_NETUSBDEMO4VC6_H__D561C8F0_B146_43C1_969E_563610C1D959__INCLUDED_)
#define AFX_NETUSBDEMO4VC6_H__D561C8F0_B146_43C1_969E_563610C1D959__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CNetUsbDemo4VC6App:
// See NetUsbDemo4VC6.cpp for the implementation of this class
//

class CNetUsbDemo4VC6App : public CWinApp
{
public:
	CNetUsbDemo4VC6App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetUsbDemo4VC6App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CNetUsbDemo4VC6App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NETUSBDEMO4VC6_H__D561C8F0_B146_43C1_969E_563610C1D959__INCLUDED_)
