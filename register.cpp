//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "CountryInfoService.h"
#include "register.h"
#include "data.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

class Korisnik {
private:
	String email, surname, name, password, username, date;
public:
	Korisnik(String _name, String _surname, String _date, String _username, String _password, String _email) {
		name = _name;
		surname = _surname;
		date = _date;
		username = _username;
		password = _password;
		email = _email;
	}

    String getUsername() {
		return username;
	}

	String getPassword() {
		return password;
	}

	String getName() {
		return name;
	}

	String getSurname() {
		return surname;
	}

	String getDate() {
		return date;
	}

	String getEmail() {
		return email;
	}
};

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

	else if(countryOfRegistration->Text!="HR") {
		Application->MessageBox(L"Molimo provjerite da li ste dobro upisali državu!", L"Greška, unesena država nije podržana!", MB_ICONSTOP);
	}

	else {
		_di_IXMLusersType users = Getusers(XMLDocument1);
		_di_IXMLuserType user = users->Add();

		Korisnik novi(newName->Text, newSurname->Text, newBirthdate->Date, newUsername->Text, newPassword->Text, newEMail->Text);

		user->name = novi.getName();
		user->surname = novi.getSurname();
		user->username = novi.getUsername();
		user->password = novi.getPassword();
		user->email = novi.getEmail();
		user->birthDate = novi.getDate();
		user->administrator = false;
		XMLDocument1->SaveToFile(XMLDocument1->FileName);
		Application->MessageBox(L"Registracija uspešno obavljena", L"Uspješno je dodan novi korisnik!", MB_ICONINFORMATION);
		registerWindow->Close();




	}
}
//---------------------------------------------------------------------------


void __fastcall TregisterWindow::checkCountryAvailabilityClick(TObject *Sender)
{
_di_CountryInfoServiceSoapType countryRegistered = GetCountryInfoServiceSoapType();
if(countryRegistered->CountryName(countryOfRegistration->Text)=="Croatia"){
	ShowMessage("Odabrana drzava je dostupna.");
}
else if(countryRegistered->CountryName(countryOfRegistration->Text)=="Country not found in the database"){
	ShowMessage("Država ne postoji ili nije ispravno napisan kod države.");
}
else{
	ShowMessage("Odabrana drzava " + countryRegistered->CountryName(countryOfRegistration->Text) + " nije dostupna.");
}
}
//---------------------------------------------------------------------------


