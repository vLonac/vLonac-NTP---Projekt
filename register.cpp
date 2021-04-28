//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TregisterWindow *registerWindow;
//---------------------------------------------------------------------------
__fastcall TregisterWindow::TregisterWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TregisterWindow::registerUserClick(TObject *Sender)
{
	if(newName->Text == "" || newSurname->Text == "" || newUsername->Text == "" || newPassword->Text == "" || newEMail->Text == "") {
		Application->MessageBox(L"Molimo ispunite sva polja", L"Greška, nisu popunjena sva polja!", MB_ICONSTOP);
	}

	else if(TOSBox->Checked == 0) {
		if(Application->MessageBox(L"Za uspješnu registraciju morate prihvatiti uvjete poslovanja, slažete li se s našim uvjetima poslovanja?", L"Greška, uvjeti poslovanja nisu prihvaćeni!", MB_YESNO) == IDYES){
		   TOSBox->Checked = 1;
		}
		else {
			if(Application->MessageBox(L"Nije moguće registrirati se bez prihvaćanja uvjeta, želite li odustati od stvaranja novog računa?", L"Greška, želite li izaći", MB_YESNO)== IDYES) {
				registerWindow->Close();
			}
		}
	}
}
//---------------------------------------------------------------------------

