// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

// DDPIActiveXCtrl.h : Declaration of the CDDPIActiveXCtrl ActiveX Control class.


// CDDPIActiveXCtrl : See DDPIActiveXCtrl.cpp for implementation.

class CDDPIActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CDDPIActiveXCtrl)

// Constructor
public:
	CDDPIActiveXCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	virtual DWORD GetControlFlags();

// Implementation
protected:
	~CDDPIActiveXCtrl();

	DECLARE_OLECREATE_EX(CDDPIActiveXCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CDDPIActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CDDPIActiveXCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CDDPIActiveXCtrl)		// Type name and misc status

	// Subclassed control support
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

