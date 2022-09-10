#include "CControlador.h"
#include "conio.h"
int main()
{
	srand(time(NULL));
	Console::CursorVisible = false;
	CControlador obj = CControlador();
	int tecla;
	while (1)
	{
		if (kbhit())
		{
			tecla = _getch();
			if (tecla == ' ')
				obj.InsertarRatones();
		}
		obj.PintaRatones(); 
		_sleep(150);
		obj.BorraRatones(); 
		obj.MueveRatones();   
		
	}
	system("pause>0");
	return 0;
}