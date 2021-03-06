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
	void __fastcall FormShow(TObject *Sender);
	void __fastcall newReservationButtonClick(TObject *Sender);
	void __fastcall showReservationsClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall ThomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE ThomeWindow *homeWindow;
//---------------------------------------------------------------------------
#endif
