#include <vcl.h>

class Ticket {
public:
	String contact, message;
    Ticket(){}
	Ticket(String _contact, String _message) {
		contact = _contact;
		message = _message;
	}
};

void showTicket(Ticket ticket) {
	ShowMessage(ticket.contact + ": " + ticket.message);
}

void showIncognitoTicket(Ticket ticket) {
	ShowMessage("Korisnik: " + ticket.message);
}

