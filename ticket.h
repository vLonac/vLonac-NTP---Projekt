//---------------------------------------------------------------------------

#ifndef ticketH
#define ticketH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TticketWindow : public TForm
{
__published:	// IDE-managed Components
	TEdit *editName;
	TEdit *editMessage;
	TLabel *Label1;
	TLabel *Label2;
	TButton *buttonSend;
	TButton *buttonSendInc;
	void __fastcall buttonSendClick(TObject *Sender);
	void __fastcall buttonSendIncClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TticketWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TticketWindow *ticketWindow;
//---------------------------------------------------------------------------
#endif
