//---------------------------------------------------------------------------

#ifndef adminHomeH
#define adminHomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TadminHomeWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TButton *newVehicleButton;
	void __fastcall newVehicleButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TadminHomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TadminHomeWindow *adminHomeWindow;
//---------------------------------------------------------------------------
#endif
