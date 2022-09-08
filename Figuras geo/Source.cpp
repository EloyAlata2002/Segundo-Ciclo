#include "Manejador.h"
void main()
{
	CManeja objman = CManeja();
	objman.Generar();
	while (1)
	{
		objman.Mostrar();
		_sleep(50);
		objman.Borrar();
		objman.Mover();
	}
}