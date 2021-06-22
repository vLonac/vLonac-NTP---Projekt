//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "vehicleLog.h"
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
void __fastcall TForm1::IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding)
{
	UnicodeString Message = BytesToString(AData);
	ListLog->Items->Add(Message);
}
//---------------------------------------------------------------------------
