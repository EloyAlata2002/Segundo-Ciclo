#include "CErizo.h"
#include "conio.h"
void main()
{
	srand(time(NULL));
	CErizo* obj = new CErizo;
	Console::CursorVisible = false;
	while (1)
	{
		obj->Pinta();
		_sleep(150);
		obj->Borra();
		obj->Mueve();
		if (kbhit()) break;
	}
	_getch();
}