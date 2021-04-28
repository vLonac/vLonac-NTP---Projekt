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
class TregisterWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *registerGroup;
	TLabel *newUsernameLabel;
	TLabel *newPasswordLabel;
	TEdit *newUsername;
	TButton *registerUser;
	TEdit *newPassword;
	TEdit *newEMail;
	TLabel *newEMailLabel;
	TEdit *newSurname;
	TLabel *newSurnameLabel;
	TEdit *newName;
	TLabel *newNameLabel;
	TDateTimePicker *newBirthdate;
	TLabel *newBirthdateLabel;
	TCheckBox *TOSBox;
	void __fastcall registerUserClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TregisterWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TregisterWindow *registerWindow;
//---------------------------------------------------------------------------
#endif
