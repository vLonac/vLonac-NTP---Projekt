//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TCP.h"
#include <System.Classes.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::IdTCPServer1Execute(TIdContext *AContext)
{
	String connection = AContext->Connection->Socket->ReadLn();
	Synchronize([&](){
		ListBoxLog->Items->Add(connection);
	});
	AContext->Connection->Disconnect();
}
//---------------------------------------------------------------------------
