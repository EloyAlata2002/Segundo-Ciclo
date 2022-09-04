#include "CAbeja.h"
#include "iostream"

int main()
{
	srand(time(NULL));
	Console::CursorVisible = false;
	CAbeja *obj=new CAbeja();
	do
	{
		obj->Dibuja();
		_sleep(150);
		obj->Borra();
		obj->Mover();
	} while (!kbhit());
	_getch();
	return 0;
}
