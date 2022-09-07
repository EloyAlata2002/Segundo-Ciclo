#include <conio.h>
#include "Barco.h"
int main()
{
	CBarco obj = CBarco(40, 20);
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
		obj.Mostrar(); obj.MostrarBalas();
		_sleep(150);
		obj.Borrar();  obj.BorrarBalas();
		obj.Mover();   obj.MoverBalas();
		obj.AnalizaryEliminar();
	}
	return 0;
}