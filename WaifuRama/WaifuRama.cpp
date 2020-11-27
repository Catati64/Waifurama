#include "stdafx.h"  //________________________________________ WaifuRama.cpp
#include "WaifuRama.h"


void WaifuRama::Window_Open(Win::Event& e)
{
	Waifu[0].CreateFromResource(this->hInstance, IDB_BITMAP1);
	Waifu[1].CreateFromResource(this->hInstance, IDB_BITMAP2);
	Waifu[2].CreateFromResource(this->hInstance, IDB_BITMAP3);
	Waifu[3].CreateFromResource(this->hInstance, IDB_BITMAP4);
	Waifu[4].CreateFromResource(this->hInstance, IDB_BITMAP5);
	Waifu[5].CreateFromResource(this->hInstance, IDB_BITMAP6);
	Waifu[6].CreateFromResource(this->hInstance, IDB_BITMAP7);
	Waifu[7].CreateFromResource(this->hInstance, IDB_BITMAP8);
	Waifu[8].CreateFromResource(this->hInstance, IDB_BITMAP9);
	Waifu[9].CreateFromResource(this->hInstance, IDB_BITMAP10);
	Waifu[10].CreateFromResource(this->hInstance, IDB_BITMAP11);
	Waifu[11].CreateFromResource(this->hInstance, IDB_BITMAP12);
	Waifu[12].CreateFromResource(this->hInstance, IDB_BITMAP1);
	Waifu[13].CreateFromResource(this->hInstance, IDB_BITMAP2);
	Waifu[14].CreateFromResource(this->hInstance, IDB_BITMAP3);
	Waifu[15].CreateFromResource(this->hInstance, IDB_BITMAP4);
	Waifu[16].CreateFromResource(this->hInstance, IDB_BITMAP5);
	Waifu[17].CreateFromResource(this->hInstance, IDB_BITMAP6);
	Waifu[18].CreateFromResource(this->hInstance, IDB_BITMAP7);
	Waifu[19].CreateFromResource(this->hInstance, IDB_BITMAP8);
	Waifu[20].CreateFromResource(this->hInstance, IDB_BITMAP9);
	Waifu[21].CreateFromResource(this->hInstance, IDB_BITMAP10);
	Waifu[22].CreateFromResource(this->hInstance, IDB_BITMAP11);
	Waifu[23].CreateFromResource(this->hInstance, IDB_BITMAP12);

	BAC.CreateFromResource(this->hInstance, IDB_BAC);

	Inicio();
}

void WaifuRama::Inicio()
{
	bt1.SetEnabled(true);
	bt1.SetImage(BAC);
	bt2.SetEnabled(true);
	bt2.SetImage(BAC);
	bt3.SetEnabled(true);
	bt3.SetImage(BAC);
	bt4.SetEnabled(true);
	bt4.SetImage(BAC);
	bt5.SetEnabled(true);
	bt5.SetImage(BAC);
	bt6.SetEnabled(true);
	bt6.SetImage(BAC);
	bt7.SetEnabled(true);
	bt7.SetImage(BAC);
	bt8.SetEnabled(true);
	bt8.SetImage(BAC);
	bt9.SetEnabled(true);
	bt9.SetImage(BAC);
	bt10.SetEnabled(true);
	bt10.SetImage(BAC);
	bt11.SetEnabled(true);
	bt11.SetImage(BAC);
	bt12.SetEnabled(true);
	bt12.SetImage(BAC);
	bt13.SetEnabled(true);
	bt13.SetImage(BAC);
	bt14.SetEnabled(true);
	bt14.SetImage(BAC);
	bt15.SetEnabled(true);
	bt15.SetImage(BAC);
	bt16.SetEnabled(true);
	bt16.SetImage(BAC);
	bt17.SetEnabled(true);
	bt17.SetImage(BAC);
	bt18.SetEnabled(true);
	bt18.SetImage(BAC);
	bt19.SetEnabled(true);
	bt19.SetImage(BAC);
	bt20.SetEnabled(true);
	bt20.SetImage(BAC);
	bt21.SetEnabled(true);
	bt21.SetImage(BAC);
	bt22.SetEnabled(true);
	bt22.SetImage(BAC);
	bt23.SetEnabled(true);
	bt23.SetImage(BAC);
	bt24.SetEnabled(true);
	bt24.SetImage(BAC);
	int i, ran;
	for (i = 0; i < 24; i++) {
		imgA[i] = i;
	}
	for (i = 0; i < 24; i++) {
		ran = (rand() % 24);
		if (imgA[ran] == -1) {
			i-=1;
		}
		else {
			ImgBtn[i] = imgA[ran];
			imgA[ran] = -1;
		}
	}

}

void WaifuRama::bt1_Click(Win::Event& e)
{
	bt1.SetImage(Waifu[ImgBtn[0]]);
}

void WaifuRama::bt2_Click(Win::Event& e)
{
	bt2.SetImage(Waifu[ImgBtn[1]]);
}

void WaifuRama::bt3_Click(Win::Event& e)
{
	bt3.SetImage(Waifu[ImgBtn[2]]);
}

void WaifuRama::bt4_Click(Win::Event& e)
{
	bt4.SetImage(Waifu[ImgBtn[3]]);
}

void WaifuRama::bt5_Click(Win::Event& e)
{
	bt5.SetImage(Waifu[ImgBtn[4]]);
}

void WaifuRama::bt6_Click(Win::Event& e)
{
	bt6.SetImage(Waifu[ImgBtn[5]]);
}

void WaifuRama::bt7_Click(Win::Event& e)
{
	bt7.SetImage(Waifu[ImgBtn[6]]);
}

void WaifuRama::bt8_Click(Win::Event& e)
{
	bt8.SetImage(Waifu[ImgBtn[7]]);
}

void WaifuRama::bt9_Click(Win::Event& e)
{
	bt9.SetImage(Waifu[ImgBtn[8]]);
}

void WaifuRama::bt10_Click(Win::Event& e)
{
	bt10.SetImage(Waifu[ImgBtn[9]]);
}

void WaifuRama::bt11_Click(Win::Event& e)
{
	bt11.SetImage(Waifu[ImgBtn[10]]);
}

void WaifuRama::bt12_Click(Win::Event& e)
{
	bt12.SetImage(Waifu[ImgBtn[11]]);
}

void WaifuRama::bt13_Click(Win::Event& e)
{
	bt13.SetImage(Waifu[ImgBtn[12]]);
}

void WaifuRama::bt14_Click(Win::Event& e)
{
	bt14.SetImage(Waifu[ImgBtn[13]]);
}

void WaifuRama::bt15_Click(Win::Event& e)
{
	bt15.SetImage(Waifu[ImgBtn[14]]);
}

void WaifuRama::bt16_Click(Win::Event& e)
{
	bt16.SetImage(Waifu[ImgBtn[15]]);
}

void WaifuRama::bt17_Click(Win::Event& e)
{
	bt17.SetImage(Waifu[ImgBtn[16]]);
}

void WaifuRama::bt18_Click(Win::Event& e)
{
	bt18.SetImage(Waifu[ImgBtn[17]]);
}

void WaifuRama::bt19_Click(Win::Event& e)
{
	bt19.SetImage(Waifu[ImgBtn[18]]);
}

void WaifuRama::bt20_Click(Win::Event& e)
{
	bt20.SetImage(Waifu[ImgBtn[19]]);
}

void WaifuRama::bt21_Click(Win::Event& e)
{
	bt21.SetImage(Waifu[ImgBtn[20]]);
}

void WaifuRama::bt22_Click(Win::Event& e)
{
	bt22.SetImage(Waifu[ImgBtn[21]]);
}

void WaifuRama::bt23_Click(Win::Event& e)
{
	bt23.SetImage(Waifu[ImgBtn[22]]);
}

void WaifuRama::bt24_Click(Win::Event& e)
{
	bt24.SetImage(Waifu[ImgBtn[23]]);
}

void WaifuRama::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, false);
}

void WaifuRama::Window_Timer(Win::Event& e)
{
	//this->timer.Set(1, 1000); // To set timer 1, call this function outside the timer event
	//this->timer.Kill(1); // To stop timer 1, call this function outside the timer event
	switch(e.wParam)
	{
	case 0: //________ Timer 0
		break;
	case 1: //________ Timer 1
		break;
	}
}

void WaifuRama::btRei_Click(Win::Event& e)
{
	Inicio();
}

void WaifuRama::btInicio_Click(Win::Event& e)
{
}

void WaifuRama::lb3_CtlColorStatic(Win::Event& e)
{
}

