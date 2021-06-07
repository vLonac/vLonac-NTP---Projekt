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
//---------------------------------------------------------------------------
class ThomeWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *rentalGroup;
	TListView *listCars;
	TXMLDocument *XMLDocument2;
	TButton *newReservationButton;
	TXMLDocument *XMLDocument1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall newReservationButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall ThomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE ThomeWindow *homeWindow;
//---------------------------------------------------------------------------
#endif
