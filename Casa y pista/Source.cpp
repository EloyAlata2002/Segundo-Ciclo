#include <conio.h>
#include "CManejador.h"
void main()
{
	CManejador obj;
	char letra;
	int posx, posy;
	cout << "Bienvenido a comprar de la constructora --Suenos faciles--" << endl;
	cout << "Solo presione C si deseas coomprar una casa o P si deseas una pista:> ";
	while (1)
	{
		if (kbhit)
		{
			letra = toupper(_getch());
			if (letra == 'C')
			{
				Console::SetCursorPosition(0, 2);
				cout << "En que x e y deseas la casa :> ";
				cin >> posx >> posy;
				obj.InsertarCasa(posx, posy);
				Console::SetCursorPosition(0, 2);
				cout << "                                       ";
			}
			if (letra == 'P')
			{
				Console::SetCursorPosition(0,2);
				cout << "En que x e y deseas la pista :> ";
				cin >> posx >> posy;
				obj.InsertarPista(posx, posy);
				Console::SetCursorPosition(0, 2);
				cout << "                                       ";
			}
			obj.MostrarTodos();
		}
	}
}
