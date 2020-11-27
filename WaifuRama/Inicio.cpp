#include "stdafx.h"  //_____________________________________________ Inicio.cpp
#include "Inicio.h"
#include "WaifuRama.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Inicio app;
	return app.BeginDialog(IDI_WaifuRama, hInstance);
}

void Inicio::Window_Open(Win::Event& e)
{
	
	//________________________________________________________ pic1
	//Add the bitmap using: Resource View
	//CG::DDBitmap bitmap; //Declare as MEMBER VARIABLE
	//bitmap.CreateFromResource(this->hInstance, IDB_APPLE);
	//pic1.SetImage(bitmap);
	Wall.CreateFromResource(this->hInstance, IDB_WALL);
	pic2.SetImage(Wall);
	timer.Set(1, 2000);
	Waifu[0].CreateFromResource(this->hInstance, IDB_BITMAP13);
	Waifu[1].CreateFromResource(this->hInstance, IDB_BITMAP14);
	Waifu[2].CreateFromResource(this->hInstance, IDB_BITMAP15);
	Waifu[3].CreateFromResource(this->hInstance, IDB_BITMAP16);
	Waifu[4].CreateFromResource(this->hInstance, IDB_BITMAP17);
	Waifu[5].CreateFromResource(this->hInstance, IDB_BITMAP18);
	Waifu[6].CreateFromResource(this->hInstance, IDB_BITMAP19);
	Waifu[7].CreateFromResource(this->hInstance, IDB_BITMAP20);
	Waifu[8].CreateFromResource(this->hInstance, IDB_BITMAP21);
	Waifu[9].CreateFromResource(this->hInstance, IDB_BITMAP22);
	Waifu[10].CreateFromResource(this->hInstance, IDB_BITMAP23);
	Waifu[11].CreateFromResource(this->hInstance, IDB_BITMAP24);
	pic1.SetImage(Waifu[(rand()%11)]);
	//________________________________________________________ pic2
	//Add the bitmap using: Resource View
	//CG::DDBitmap bitmap; //Declare as MEMBER VARIABLE
	//bitmap.CreateFromResource(this->hInstance, IDB_APPLE);
	//pic2.SetImage(bitmap);
}



void Inicio::lb1_CtlColorStatic(Win::Event& e)
{
}

void Inicio::Window_Timer(Win::Event& e)
{
	//this->timer.Set(1, 1000); // To set timer 1, call this function outside the timer event
	//this->timer.Kill(1); // To stop timer 1, call this function outside the timer event
	switch(e.wParam)
	{
	case 0: //________ Timer 0
		break;
	case 1: //________ Timer 1
	{
		i++;
		if (i == 10) {
			i = 0;
			pic1.SetImage(Waifu[11]);
		}
		else {
			pic1.SetImage(Waifu[i]);
		}
	}
	}
}

void Inicio::bt1_Click(Win::Event& e)
{
	WaifuRama dlg;
	dlg.BeginDialog(hWnd);
}

void Inicio::bt2_Click(Win::Event& e)
{
}

void Inicio::bt3_Click(Win::Event& e)
{
}

void Inicio::bt4_Click(Win::Event& e)
{
}

void Inicio::bt5_Click(Win::Event& e)
{
}

void Inicio::bt6_Click(Win::Event& e)
{
}

