//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class CountNames : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall CountNames(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
