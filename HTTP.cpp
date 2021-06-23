//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HTTP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THTTPWindow *HTTPWindow;
//---------------------------------------------------------------------------
__fastcall THTTPWindow::THTTPWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonDownloadClick(TObject *Sender)
{
	TFileStream* fs = new TFileStream("D:\\car.jpg", fmCreate);
	komponentaHTTP->Get(linkEdit->Text, fs);
	delete fs;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::komponentaHTTPWorkBegin(TObject *ASender, TWorkMode AWorkMode,
          __int64 AWorkCountMax)
{
	progressBar->Position = 0;
	progressBar->Max = AWorkCountMax;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::komponentaHTTPWork(TObject *ASender, TWorkMode AWorkMode,
		  __int64 AWorkCount)
{
	progressBar->Position = AWorkCount;

	float a = AWorkCount;

	statusLabel->Caption = String(FormatFloat("0.00",float(AWorkCount)/float(progressBar->Max)*100)) + "%";

	Application->ProcessMessages();
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::komponentaHTTPWorkEnd(TObject *ASender, TWorkMode AWorkMode)

{
	if(progressBar->Position == progressBar->Max) {

	Application->MessageBox(L"Preuzeta slika nalazi se na D:\\car.jpg", L"Preuzimanje završeno!", MB_ICONINFORMATION);
	}
	progressBar->Position = 0;
	statusLabel->Caption = "0%";
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonCancelClick(TObject *Sender)
{
	Application->MessageBox(L"Preuzimanje prekinuto", L"Greška, slika nije preuzeta!", MB_ICONSTOP);
	komponentaHTTP->Disconnect();
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonSpeed1Click(TObject *Sender)
{
	downloadSpeedLimiter->BitsPerSec = 4000000;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonSpeed2Click(TObject *Sender)
{
	downloadSpeedLimiter->BitsPerSec = 8000000;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonSpeed3Click(TObject *Sender)
{
	downloadSpeedLimiter->BitsPerSec = 16000000;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::Button1Click(TObject *Sender)
{
    Image1->Picture->LoadFromFile("D:\\car.jpg");
}
//---------------------------------------------------------------------------

