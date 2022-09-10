#include "CAvion.h"
#include "conio.h"
int main()
{
	CAvion obj = CAvion(50, 22);
	int tecla;
	Console::CursorVisible = false;
	while (1)
	{
		if (kbhit())
		{
			tecla = _getch();
			if (tecla == ' ')
				obj.InsertarBalita();
		}
		obj.Pinta(); obj.MostrarBalas();
		_sleep(150);
		obj.Borra();  obj.BorrarBalas();
		obj.Mueve();   obj.MoverBalas();
		obj.AnalizaryEliminar();
	}
}