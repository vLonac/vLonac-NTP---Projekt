//---------------------------------------------------------------------------

#ifndef registerH
#define registerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *newUsername;
	TButton *Button1;
	TEdit *newPassword;
	TEdit *newEmail;
	TLabel *Label1;
	TEdit *newSurname;
	TLabel *Label4;
	TEdit *newName;
	TLabel *Label5;
	TDateTimePicker *newBirthdate;
	TLabel *Label7;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
