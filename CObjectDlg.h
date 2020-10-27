#pragma once


// CObjectDlg 대화 상자

class CObjectDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CObjectDlg)

public:
	CObjectDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CObjectDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_OBJECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_nSelObject;
	virtual BOOL OnInitDialog();
	afx_msg void OnRadioCircle();
	afx_msg void OnRadioRect();
};
