#pragma once
#include <iostream>
using namespace std;
using namespace System;
class CHerencia
{
protected:
	int x, y, dx, dy, alto, ancho, forma;
public:
	CHerencia();
	CHerencia(int _x, int _y, int _dx, int _dy);
	void Mover();
	void Borrar();
	int getforma();
	int getx();
	int gety();
	int getdy();
	int getancho();
	int getalto();
	virtual void DibujarEstre() {};
	
};
CHerencia::CHerencia() {}
CHerencia::CHerencia(int _x, int _y, int _dx, int _dy)
{
	x = _x; y = _y; dx = _dx; dy = _dy; alto = 1; ancho = 1;
}
void CHerencia::Mover()
{
	y = y + dy;
	if (y+dy+alto > 25) dy = 0;
}
void CHerencia::Borrar()
{
	int px = x, py = y;
	for (int fila = 1; fila <= alto; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= ancho; col++)
			cout << ' ';
		py++;
	}
}
int CHerencia::getforma() { return forma; }
int CHerencia::getx() { return x; }
int CHerencia::gety() { return y; }
int CHerencia::getancho() { return ancho; }
int CHerencia::getalto() { return alto; }
int CHerencia::getdy() { return dy; }