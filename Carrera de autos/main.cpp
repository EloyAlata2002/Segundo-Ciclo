#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;
using namespace System;

#include "Carrera.h"
#include "Carro.h"

int main()
{
	srand(time(NULL));
	int participantes = 5;
	int largo = 100;
	Console::SetWindowSize(largo, participantes * 5);
	Console::CursorVisible = false;
	Carro* carrito = new Carro(0, 0);
	carrito->dibujar();

	Carrera* C = new Carrera(participantes, largo - 7);

	while (true)
		if (_kbhit())
			if (toupper(_getch()) == 'G')
				break;
	
	

	while (C->HayGanador() == false)
	{
		C->Correr();
		_sleep(150);

		if (_kbhit())
			if (toupper(_getch()) == 'P')
				break;
	}

	

	delete C;

	_getch();
	return 0;
}