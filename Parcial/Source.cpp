#include "CControlador.h"
#include <conio.h>
void main()
{
	Console::CursorVisible = false;
	CControlador obj;
	int v;
	int diamantes;
	do
	{
		obj.EliminarBalas();
		obj.GenerarBalas();
		if (kbhit())
		{
			int tecla = getch();
			if (tecla == 224)
			{
				tecla = getch();
				obj.MueveMonigote(tecla);
			}
		}
		obj.DibujaBalas_Murcielago_Monigote();
		v=obj.TotaldeVidas();
		Console::SetCursorPosition(70, 23);
		cout << "Vidas:> " << v;
		_sleep(50);
		obj.BorraBalas_Murcielado_Monigote();
		obj.MueveBalas_Murcielago();
		obj.Colision_Monigote_Diamante();
		obj.Colision_Monigote_Trebol();
	} while (v > 0);
	Console::SetCursorPosition(35, 10);
	cout << "-Fin del juego perdio todas sus vidas-";
	Console::SetCursorPosition(35, 11);
	cout << "Total de diamantes :> " << obj.TotalDiamantes();
	_getch();
}