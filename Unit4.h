//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class CountSurnames : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall CountSurnames(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
