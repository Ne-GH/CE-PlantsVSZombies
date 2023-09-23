
// CE植物大战僵尸Dlg.h: 头文件
//

#pragma once


// CCE植物大战僵尸Dlg 对话框
class CCE植物大战僵尸Dlg : public CDialogEx
{
// 构造
public:
	CCE植物大战僵尸Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;


	HWND _handle;
	DWORD _pid;
	HANDLE _process_handle;


	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()



public:

	afx_msg void OnBnClickedInfsun();
	afx_msg void OnBnClickedNocd();
	afx_msg void OnStnClickedState();
	afx_msg void OnBnClickedOpenprpcess();


	afx_msg void SetStateText(CString);

};
