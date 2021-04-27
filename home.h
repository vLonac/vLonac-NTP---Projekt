//---------------------------------------------------------------------------

#ifndef homeH
#define homeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class ThomeWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *rentalGroup;
private:	// User declarations
public:		// User declarations
	__fastcall ThomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE ThomeWindow *homeWindow;
//---------------------------------------------------------------------------
#endif
