#include <conio.h>
#include "CManejador.h"
void main() {
	CManejador obj;
	char  letra;
	while (1)
	{
		if (kbhit())
		{
			letra = _getch();
			if (letra == 'a') obj.InsertaAlFinal();
			if (letra == 'e') obj.EliminarAlInicio();
			if (letra == 'c') obj.CambiarColorTodos();
		}
		obj.MostrarTodos();
		_sleep(100);
		obj.BorrarTodos();
		obj.MoverTodos();
	}
}