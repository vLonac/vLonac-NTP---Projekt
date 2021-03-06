//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ticket.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TticketWindow *ticketWindow;

class Ticket {
public:
	String contact, message;
	Ticket(){}
	Ticket(String _contact, String _message) {
		contact = _contact;
		message = _message;
	}
};

void showTicket(Ticket ticket);

void showIncognitoTicket(Ticket ticket);
//---------------------------------------------------------------------------
__fastcall TticketWindow::TticketWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TticketWindow::buttonSendClick(TObject *Sender)
{
	Ticket newTicket(editName->Text, editMessage->Text);
	showTicket(newTicket);
}
//---------------------------------------------------------------------------
void __fastcall TticketWindow::buttonSendIncClick(TObject *Sender)
{
    Ticket newTicket(editName->Text, editMessage->Text);
	showIncognitoTicket(newTicket);
}
//---------------------------------------------------------------------------
