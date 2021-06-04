//---------------------------------------------------------------------------

#ifndef adminHomeH
#define adminHomeH
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
class TadminHomeWindow : public TForm
{
__published:	// IDE-managed Components
	TListView *listCars;
	TButton *newVehicleButton;
	TButton *loadVehiclesButton;
	TXMLDocument *XMLDocument2;
	TButton *deleteVehicleButton;
	void __fastcall newVehicleButtonClick(TObject *Sender);
	void __fastcall loadVehiclesButtonClick(TObject *Sender);
	void __fastcall deleteVehicleButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TadminHomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TadminHomeWindow *adminHomeWindow;
//---------------------------------------------------------------------------
#endif
