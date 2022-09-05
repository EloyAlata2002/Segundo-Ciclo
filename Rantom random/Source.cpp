#include "CRaton.h"
#include "iostream"
#include "conio.h"
void main() {
	srand(time(NULL));
	Console::CursorVisible=false;
	CRaton* obj = new CRaton;
	while (1)
	{
		obj->Pinta();
		_sleep(150);
		obj->Borra();
		obj->Mueve();
	}
	_getch();
}