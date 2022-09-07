#pragma once
#include "Chasis.h"
#include "Llanta.h"
#include <vector>

class Carro {
private:
	vector <Llanta*> arrllantas;
	Chasis* objChasis;
	ConsoleColor color;
	int x, y, dx;
public:
	Carro(int px, int py) {
		x = px;
		y = py;

		arrllantas.push_back(new Llanta(x + 0, y + 0));
		arrllantas.push_back(new Llanta(x + 3, y + 0));
		arrllantas.push_back(new Llanta(x + 0, y + 3));
		arrllantas.push_back(new Llanta(x + 3, y + 3));
		objChasis = new Chasis(x + 0, y + 1);
		dx = rand() % 6 + 1;
		color = (ConsoleColor)(rand() % 15 + 1);

	}

	~Carro()
	{
		arrllantas.erase(arrllantas.begin(), arrllantas.end());
	}

	void Borrar()
	{
		for (int i = 0; i < 4; i++)
			arrllantas[i]->borrar();

		objChasis->borrar();
	}
	void Mover()
	{
		for (int i = 0; i < 4; i++)
			arrllantas[i]->mover(dx);
		objChasis->mover(dx);
		x += dx;
	}
	void dibujar()
	{
		for (int i = 0; i < 4; i++)
			arrllantas[i]->dibujar(color);
		objChasis->dibujar(color);
	}

	int GetX()
	{
		return x;
	}

};
