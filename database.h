//---------------------------------------------------------------------------

#ifndef databaseH
#define databaseH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include "frxClass.hpp"
#include "frxDBSet.hpp"
#include "frxExportBaseDialog.hpp"
#include "frxExportPDF.hpp"
#include "frxExportRTF.hpp"
//---------------------------------------------------------------------------
class TdatabaseWindow : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADOTable *TZaposlenici;
	TDataSource *DZaposlenici;
	TDBGrid *DBGrid1;
	TADOTable *TPoslovnice;
	TDataSource *DPoslovnice;
	TDBGrid *DBGrid2;
	TADOTable *TGradovi;
	TDataSource *DGradovi;
	TAutoIncField *TGradoviID;
	TWideStringField *TGradoviNazivGrada;
	TIntegerField *TGradoviPostanskiBroj;
	TLabel *Label1;
	TDBEdit *DBEdit1;
	TLabel *Label2;
	TDBEdit *DBEdit2;
	TLabel *Label3;
	TDBEdit *DBEdit3;
	TDBNavigator *DBNavigator1;
	TButton *buttonAddPero;
	TButton *Button1;
	TEdit *editSearch;
	TButton *buttonSearch;
	TAutoIncField *TZaposleniciID;
	TWideStringField *TZaposleniciIme;
	TWideStringField *TZaposleniciPrezime;
	TIntegerField *TZaposleniciIDPoslovnice;
	TLabel *Label6;
	TDataSource *DDržave;
	TADOTable *TDržave;
	TIntegerField *TGradoviIDDržave;
	TDBGrid *DBGrid4;
	TDBLookupComboBox *DBLookupComboBox1;
	TfrxDBDataset *frxPoslovnice;
	TfrxDBDataset *frxZaposlenici;
	TfrxPDFExport *frxPDFExport1;
	TfrxRTFExport *frxRTFExport1;
	TButton *buttonExport;
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TAutoIncField *TPoslovniceID;
	TWideStringField *TPoslovniceNaziv;
	TWideStringField *TPoslovniceAdresa;
	TIntegerField *TPoslovniceIDGrada;
	TLabel *Label4;
	TDBEdit *DBEdit4;
	TLabel *Label5;
	TDBEdit *DBEdit5;
	TLabel *Label7;
	TDBEdit *DBEdit6;
	TLabel *Label8;
	TDBEdit *DBEdit7;
	TDBNavigator *DBNavigator2;
	TGroupBox *GroupBox3;
	TLabel *Label9;
	TDBEdit *DBEdit8;
	TLabel *Label10;
	TDBEdit *DBEdit9;
	TLabel *Label11;
	TDBEdit *DBEdit10;
	TLabel *Label12;
	TDBEdit *DBEdit11;
	TDBNavigator *DBNavigator3;
	TfrxReport *frxReport1;
	TButton *buttonSort;
	void __fastcall buttonAddPeroClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall buttonSearchClick(TObject *Sender);
	void __fastcall buttonExportClick(TObject *Sender);
	void __fastcall buttonSortClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TdatabaseWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdatabaseWindow *databaseWindow;
//---------------------------------------------------------------------------
#endif
