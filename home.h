//---------------------------------------------------------------------------

#ifndef homeH
#define homeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <REST.Client.hpp>
#include <REST.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
//---------------------------------------------------------------------------
class ThomeWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *rentalGroup;
	TListView *listCars;
	TXMLDocument *XMLDocument2;
	TButton *newReservationButton;
	TXMLDocument *XMLDocument1;
	TDatePicker *newReservationStart;
	TDatePicker *newReservationEnd;
	TButton *showReservations;
	TLabel *Label1;
	TLabel *Label2;
	TRESTClient *RESTClient1;
	TRESTRequest *RESTRequest1;
	TRESTResponse *RESTResponse1;
	TMemo *Memo1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TButton *getIP;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall newReservationButtonClick(TObject *Sender);
	void __fastcall showReservationsClick(TObject *Sender);
	void __fastcall getIPClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall ThomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE ThomeWindow *homeWindow;
//---------------------------------------------------------------------------
#endif
