//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TCP.h"
#include "thread.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

void newConnection(String text)
{
	Form1->ListBoxLog->Items->Add(text);
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdTCPServer1Execute(TIdContext *AContext)
{
	String connection = AContext->Connection->Socket->ReadLn();
	newConnection(connection);
	AContext->Connection->Disconnect();
}
//---------------------------------------------------------------------------
