﻿#pragma once


// CColorDlg 대화 상자

class CColorDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CColorDlg)

public:
	CColorDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CColorDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_COLOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_nBlue;
	int m_nGreen;
	int m_nRed;
	CSliderCtrl m_sliderBlue;
	CSliderCtrl m_sliderGreen;
	CSliderCtrl m_sliderRed;
	COLORREF m_colorObject;
	virtual BOOL OnInitDialog();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
};
