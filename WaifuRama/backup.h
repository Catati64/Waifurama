#pragma once  //______________________________________ WaifuRama.h  
#include "Resource.h"
class WaifuRama: public Win::Dialog
{
public:
	WaifuRama()
	{
	}
	~WaifuRama()
	{
	}
	void Inicio();
	CG::DDBitmap Waifu[24], BAC;
	int btn, btnTm1, BtnTm2, imgD[24], ImgBtn[24], imgA[24];
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button gbox1;
	Win::Label lb3;
	Win::Button bt1;
	Win::Button bt2;
	Win::Button bt3;
	Win::Button bt4;
	Win::Button bt5;
	Win::Button bt6;
	Win::Button bt7;
	Win::Button bt8;
	Win::Button bt9;
	Win::Button bt10;
	Win::Button bt11;
	Win::Button bt12;
	Win::Button bt13;
	Win::Button bt14;
	Win::Button bt15;
	Win::Button bt16;
	Win::Button bt17;
	Win::Button bt18;
	Win::Button bt19;
	Win::Button bt20;
	Win::Button bt21;
	Win::Button bt22;
	Win::Button bt23;
	Win::Button bt24;
	Win::Label lb1;
	Win::Textbox tbx1;
	Win::Button btRei;
	Win::Button btInicio;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial009A;
	Win::Gdi::Font fontArial024A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(42.49208);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(27.78125);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"WaifuRama";
		gbox1.CreateX(WS_EX_TRANSPARENT, nullptr, WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 0.02646, 0.00000, 42.46563, 27.78125, hWnd, 1000);
		lb3.CreateX(0, nullptr, WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.00000, 0.00000, 42.46563, 27.75479, hWnd, 1001);
		bt1.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 0.13229, 4.36563, 5.15937, 7.72583, hWnd, 1002);
		bt2.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 5.42396, 4.36563, 5.15937, 7.72583, hWnd, 1003);
		bt3.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 10.71563, 4.36563, 5.15937, 7.72583, hWnd, 1004);
		bt4.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 16.00729, 4.36563, 5.15937, 7.72583, hWnd, 1005);
		bt5.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 21.29896, 4.36563, 5.15937, 7.72583, hWnd, 1006);
		bt6.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 26.59062, 4.36563, 5.15937, 7.72583, hWnd, 1007);
		bt7.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 31.88229, 4.36563, 5.15937, 7.72583, hWnd, 1008);
		bt8.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 37.17396, 4.36563, 5.15937, 7.72583, hWnd, 1009);
		bt9.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 0.10583, 12.17083, 5.15937, 7.72583, hWnd, 1010);
		bt10.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 5.39750, 12.17083, 5.15937, 7.72583, hWnd, 1011);
		bt11.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 10.68917, 12.17083, 5.15937, 7.72583, hWnd, 1012);
		bt12.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 15.98083, 12.17083, 5.15937, 7.72583, hWnd, 1013);
		bt13.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 21.27250, 12.17083, 5.15937, 7.72583, hWnd, 1014);
		bt14.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 26.56417, 12.17083, 5.15937, 7.72583, hWnd, 1015);
		bt15.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 31.85583, 12.17083, 5.15937, 7.72583, hWnd, 1016);
		bt16.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 37.14750, 12.17083, 5.15937, 7.72583, hWnd, 1017);
		bt17.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 0.13229, 19.97604, 5.15937, 7.72583, hWnd, 1018);
		bt18.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 5.42396, 19.97604, 5.15937, 7.72583, hWnd, 1019);
		bt19.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 10.71563, 19.97604, 5.15937, 7.72583, hWnd, 1020);
		bt20.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 16.00729, 19.97604, 5.15937, 7.72583, hWnd, 1021);
		bt21.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 21.29896, 19.97604, 5.15937, 7.72583, hWnd, 1022);
		bt22.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 26.59062, 19.97604, 5.15937, 7.72583, hWnd, 1023);
		bt23.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 31.88229, 19.97604, 5.15937, 7.72583, hWnd, 1024);
		bt24.CreateX(0, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_CENTER | BS_VCENTER | BS_BITMAP, 37.17396, 19.97604, 5.15937, 7.72583, hWnd, 1025);
		lb1.CreateX(0, L"Waifurama", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.74083, 0.79375, 10.42458, 1.50812, hWnd, 1026);
		tbx1.CreateX(WS_EX_CLIENTEDGE | WS_EX_RIGHTSCROLLBAR, nullptr, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 11.72104, 0.60854, 10.90083, 3.14854, hWnd, 1027);
		btRei.CreateX(0, L"Reiniciar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 23.81250, 1.13771, 7.77875, 0.68792, hWnd, 1028);
		btInicio.CreateX(0, L"Inicio", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 32.80833, 1.16417, 7.77875, 0.68792, hWnd, 1029);
		lb2.CreateX(0, L"Turno: J1", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 28.97188, 2.75167, 7.01146, 0.60854, hWnd, 1030);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		fontArial024A.CreateX(L"Arial", 0.846667, false, false, false, false);
		gbox1.Font = fontArial009A;
		lb3.Font = fontArial009A;
		bt1.Font = fontArial009A;
		bt2.Font = fontArial009A;
		bt3.Font = fontArial009A;
		bt4.Font = fontArial009A;
		bt5.Font = fontArial009A;
		bt6.Font = fontArial009A;
		bt7.Font = fontArial009A;
		bt8.Font = fontArial009A;
		bt9.Font = fontArial009A;
		bt10.Font = fontArial009A;
		bt11.Font = fontArial009A;
		bt12.Font = fontArial009A;
		bt13.Font = fontArial009A;
		bt14.Font = fontArial009A;
		bt15.Font = fontArial009A;
		bt16.Font = fontArial009A;
		bt17.Font = fontArial009A;
		bt18.Font = fontArial009A;
		bt19.Font = fontArial009A;
		bt20.Font = fontArial009A;
		bt21.Font = fontArial009A;
		bt22.Font = fontArial009A;
		bt23.Font = fontArial009A;
		bt24.Font = fontArial009A;
		lb1.Font = fontArial024A;
		tbx1.Font = fontArial009A;
		btRei.Font = fontArial009A;
		btInicio.Font = fontArial009A;
		lb2.Font = fontArial009A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void bt2_Click(Win::Event& e);
	void bt3_Click(Win::Event& e);
	void bt4_Click(Win::Event& e);
	void bt5_Click(Win::Event& e);
	void bt6_Click(Win::Event& e);
	void bt7_Click(Win::Event& e);
	void bt8_Click(Win::Event& e);
	void bt9_Click(Win::Event& e);
	void bt10_Click(Win::Event& e);
	void bt11_Click(Win::Event& e);
	void bt12_Click(Win::Event& e);
	void bt13_Click(Win::Event& e);
	void bt14_Click(Win::Event& e);
	void bt15_Click(Win::Event& e);
	void bt16_Click(Win::Event& e);
	void bt17_Click(Win::Event& e);
	void bt18_Click(Win::Event& e);
	void bt19_Click(Win::Event& e);
	void bt20_Click(Win::Event& e);
	void bt21_Click(Win::Event& e);
	void bt22_Click(Win::Event& e);
	void bt23_Click(Win::Event& e);
	void bt24_Click(Win::Event& e);
	void btRei_Click(Win::Event& e);
	void btInicio_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Timer(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		if (bt2.IsEvent(e, BN_CLICKED)) {bt2_Click(e); return true;}
		if (bt3.IsEvent(e, BN_CLICKED)) {bt3_Click(e); return true;}
		if (bt4.IsEvent(e, BN_CLICKED)) {bt4_Click(e); return true;}
		if (bt5.IsEvent(e, BN_CLICKED)) {bt5_Click(e); return true;}
		if (bt6.IsEvent(e, BN_CLICKED)) {bt6_Click(e); return true;}
		if (bt7.IsEvent(e, BN_CLICKED)) {bt7_Click(e); return true;}
		if (bt8.IsEvent(e, BN_CLICKED)) {bt8_Click(e); return true;}
		if (bt9.IsEvent(e, BN_CLICKED)) {bt9_Click(e); return true;}
		if (bt10.IsEvent(e, BN_CLICKED)) {bt10_Click(e); return true;}
		if (bt11.IsEvent(e, BN_CLICKED)) {bt11_Click(e); return true;}
		if (bt12.IsEvent(e, BN_CLICKED)) {bt12_Click(e); return true;}
		if (bt13.IsEvent(e, BN_CLICKED)) {bt13_Click(e); return true;}
		if (bt14.IsEvent(e, BN_CLICKED)) {bt14_Click(e); return true;}
		if (bt15.IsEvent(e, BN_CLICKED)) {bt15_Click(e); return true;}
		if (bt16.IsEvent(e, BN_CLICKED)) {bt16_Click(e); return true;}
		if (bt17.IsEvent(e, BN_CLICKED)) {bt17_Click(e); return true;}
		if (bt18.IsEvent(e, BN_CLICKED)) {bt18_Click(e); return true;}
		if (bt19.IsEvent(e, BN_CLICKED)) {bt19_Click(e); return true;}
		if (bt20.IsEvent(e, BN_CLICKED)) {bt20_Click(e); return true;}
		if (bt21.IsEvent(e, BN_CLICKED)) {bt21_Click(e); return true;}
		if (bt22.IsEvent(e, BN_CLICKED)) {bt22_Click(e); return true;}
		if (bt23.IsEvent(e, BN_CLICKED)) {bt23_Click(e); return true;}
		if (bt24.IsEvent(e, BN_CLICKED)) {bt24_Click(e); return true;}
		if (btRei.IsEvent(e, BN_CLICKED)) {btRei_Click(e); return true;}
		if (btInicio.IsEvent(e, BN_CLICKED)) {btInicio_Click(e); return true;}
		return false;
	}
};
