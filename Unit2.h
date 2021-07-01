//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class Count : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall Count(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
