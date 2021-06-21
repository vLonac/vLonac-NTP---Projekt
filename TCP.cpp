//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TCP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTCPWindow *TCPWindow;
//---------------------------------------------------------------------------
__fastcall TTCPWindow::TTCPWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTCPWindow::IdTCPServer1Execute(TIdContext *AContext)
{
	logEdit->Text = AContext->Connection->Socket->ReadLn();
	AContext->Connection->Disconnect();
}
//---------------------------------------------------------------------------


