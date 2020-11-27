#pragma once   //_____________________________________________ Inicio.h  
#include "resource.h"

class Inicio: public Win::Dialog
{
public:
	Inicio()
	{
	}
	~Inicio()
	{
	}
	CG::DDBitmap Waifu[12], Wall;
	int i;

private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label pic1;
	Win::Label pic2;
	Win::Button bt1;
	Win::Button bt2;
	Win::Button bt3;
	Win::Button bt4;
	Win::Button bt5;
	Win::Button bt6;
protected:
	Win::Gdi::Font fontArial009A;
	Win::Gdi::Font fontBritannic_Bold018A;
	Win::Gdi::Font fontBritannic_Bold072A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(42.46563);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(26.61708);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(0, nullptr, WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.00000, 0.00000, 42.46563, 26.61708, hWnd, 1000);
		pic1.CreateX(0, nullptr, WS_BORDER | WS_CHILD | WS_VISIBLE | SS_BITMAP, 23.41563, 2.38125, 15.47813, 23.15104, hWnd, 1001);
		pic2.CreateX(WS_EX_CLIENTEDGE, nullptr, WS_CHILD | WS_VISIBLE | SS_BITMAP, 1.56104, 1.32292, 19.31458, 4.23333, hWnd, 1002);
		bt1.CreateX(0, L"Jugar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.39208, 8.59896, 12.27667, 3.78354, hWnd, 1003);
		bt2.CreateX(0, L"Salir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.39208, 13.65250, 12.27667, 3.78354, hWnd, 1004);
		bt3.CreateX(0, L"Jugar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.47146, 18.97063, 3.33375, 1.24354, hWnd, 1005);
		bt4.CreateX(0, L"Jugar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 8.86354, 18.97063, 3.33375, 1.24354, hWnd, 1006);
		bt5.CreateX(0, L"Jugar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13.25563, 18.97063, 3.33375, 1.24354, hWnd, 1007);
		bt6.CreateX(0, L"i", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.79375, 24.10354, 0.68792, 0.68792, hWnd, 1008);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		fontBritannic_Bold018A.CreateX(L"Britannic Bold", 0.635000, false, false, false, false);
		fontBritannic_Bold072A.CreateX(L"Britannic Bold", 2.540000, false, false, false, false);
		lb1.Font = fontArial009A;
		bt1.Font = fontBritannic_Bold072A;
		bt2.Font = fontBritannic_Bold072A;
		bt3.Font = fontBritannic_Bold018A;
		bt4.Font = fontBritannic_Bold018A;
		bt5.Font = fontBritannic_Bold018A;
		bt6.Font = fontArial009A;
		lb1.BackColor = RGB(220, 255, 220);
	}
	//_________________________________________________
	void lb1_CtlColorStatic(Win::Event& e);
	void bt1_Click(Win::Event& e);
	void bt2_Click(Win::Event& e);
	void bt3_Click(Win::Event& e);
	void bt4_Click(Win::Event& e);
	void bt5_Click(Win::Event& e);
	void bt6_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Timer(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (lb1.IsEvent(e, WM_CTLCOLORSTATIC)) {lb1_CtlColorStatic(e); return true;}
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		if (bt2.IsEvent(e, BN_CLICKED)) {bt2_Click(e); return true;}
		if (bt3.IsEvent(e, BN_CLICKED)) {bt3_Click(e); return true;}
		if (bt4.IsEvent(e, BN_CLICKED)) {bt4_Click(e); return true;}
		if (bt5.IsEvent(e, BN_CLICKED)) {bt5_Click(e); return true;}
		if (bt6.IsEvent(e, BN_CLICKED)) {bt6_Click(e); return true;}
		return false;
	}
};
