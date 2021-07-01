//---------------------------------------------------------------------------

#ifndef vacationH
#define vacationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TvacationWindow : public TForm
{
__published:	// IDE-managed Components
	TListView *listVacations;
	TButton *buttonLoad;
	TGroupBox *GroupBox1;
	TEdit *editName;
	TEdit *editSurname;
	TEdit *editLenght;
	TUpDown *UpDown1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *buttonAdd;
	TButton *deleteButton;
	TButton *editCurrentButton;
	TButton *saveToJSON;
	TGroupBox *GroupBox2;
	TButton *buttonNameLenght;
	TButton *buttonSurnameLenght;
	TButton *buttonDaysLenght;
	void __fastcall buttonLoadClick(TObject *Sender);
	void __fastcall buttonAddClick(TObject *Sender);
	void __fastcall deleteButtonClick(TObject *Sender);
	void __fastcall editCurrentButtonClick(TObject *Sender);
	void __fastcall saveToJSONClick(TObject *Sender);
	void __fastcall buttonNameLenghtClick(TObject *Sender);
	void __fastcall buttonSurnameLenghtClick(TObject *Sender);
	void __fastcall buttonDaysLenghtClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TvacationWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TvacationWindow *vacationWindow;
//---------------------------------------------------------------------------
#endif
