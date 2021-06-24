//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "database.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma link "frxExportRTF"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma link "frxExportRTF"
#pragma resource "*.dfm"
TdatabaseWindow *databaseWindow;
//---------------------------------------------------------------------------
__fastcall TdatabaseWindow::TdatabaseWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TdatabaseWindow::buttonAddPeroClick(TObject *Sender)
{
	TZaposlenici->Insert();
	TZaposlenici->FieldByName("Ime")->AsString = "Pero";
	TZaposlenici->FieldByName("Prezime")->AsString = "Perić";
	TZaposlenici->FieldByName("IDPoslovnice")->AsInteger = 1;
    TZaposlenici->Post();
}
//---------------------------------------------------------------------------

void __fastcall TdatabaseWindow::Button1Click(TObject *Sender)
{
    TZaposlenici->Delete();
}
//---------------------------------------------------------------------------


void __fastcall TdatabaseWindow::buttonSearchClick(TObject *Sender)
{
	TLocateOptions SearchOptions;
	SearchOptions.Clear();
	SearchOptions << loPartialKey;

	if(TGradovi->Locate("NazivGrada", editSearch->Text, SearchOptions))
		ShowMessage("Grad pronađen!");
	else
        ShowMessage("Grad nije pronađen!");
}
//---------------------------------------------------------------------------



void __fastcall TdatabaseWindow::buttonExportClick(TObject *Sender)
{
	frxReport1->ShowReport();
}
//---------------------------------------------------------------------------


void __fastcall TdatabaseWindow::buttonSortClick(TObject *Sender)
{

	if (TZaposlenici->IndexFieldNames == "Ime ASC") {
	   TZaposlenici->IndexFieldNames = "Ime DESC";
	}

	else {
        TZaposlenici->IndexFieldNames = "Ime ASC";
	}
}
//---------------------------------------------------------------------------

