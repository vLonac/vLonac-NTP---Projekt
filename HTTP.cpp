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
	TFileStream* fs = new TFileStream("D:\\data.xml", fmCreate);
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
	statusLabel->Caption = String(AWorkCount/progressBar->Max*100) + "%";
	Application->ProcessMessages();
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::komponentaHTTPWorkEnd(TObject *ASender, TWorkMode AWorkMode)

{
	Application->MessageBox(L"Datoteka s korisnicima nalazi se na D:\\data.xml", L"Preuzimanje zavr�eno!", MB_ICONINFORMATION);
	progressBar->Position = 0;
	statusLabel->Caption = "0%";
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonCancelClick(TObject *Sender)
{
	komponentaHTTP->Disconnect();
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonSpeed1Click(TObject *Sender)
{
	downloadSpeedLimiter->BitsPerSec = 2000;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonSpeed2Click(TObject *Sender)
{
    downloadSpeedLimiter->BitsPerSec = 4000;
}
//---------------------------------------------------------------------------
void __fastcall THTTPWindow::buttonSpeed3Click(TObject *Sender)
{
    downloadSpeedLimiter->BitsPerSec = 8000;
}
//---------------------------------------------------------------------------
