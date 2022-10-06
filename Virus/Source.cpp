#include "CControlador.h"
#include <conio.h>
void main()
{
	Console::CursorVisible = false;
	CControlador obj;
	obj.GenerarVirusyMonigote();
	while (1)
	{
		if (kbhit())
		{
			int tecla = getch();
			if (tecla == 224)
			{
				tecla = getch();
				obj.MoverVacuna(tecla);
			}
		}
		obj.DibujarVirusyMonigote();
		_sleep(50);
		obj.BorrarVirusyMonigote();
		obj.MoverVirusyMonigote();
		obj.colisionRojoMonigote();
		obj.colisionVerdeMonigote();
		if (obj.colisionVacunaRojo() == 1)  break;
		if (obj.colisionVacunaVerde() == 1) break;
	}
}