#include "Ccontrolador.h"
#include <conio.h>
void main()
{
	Console::CursorVisible = false;
	CControlador obj;
	obj.GenerarEstrellas();
	while (1)
	{
		
		obj.EliminarEstrella();
		if (kbhit())
		{
			int tecla = getch(); //codigo especial
			if (tecla == 224)
			{
				tecla = getch(); //tecla 72 77 80 75
				obj.MoverMonigote(tecla);
			}
		}
		obj.DibujarEstrellas();
		_sleep(50);
		obj.BorrarEstrellas();
		obj.MoverEstrellas();
		
	}

}