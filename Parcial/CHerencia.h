#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CHerencia
{
protected:
	int x, y, dx, dy, alto, ancho;
	int forma, color;
public:
	CHerencia();
	CHerencia(int px, int py, int pdx, int pdy);
	virtual void Dibuja() {};
	void Borrar();
	void Mover();
	int Getx();
	int Gety();
	int Getalto();
	int Getancho();
	int Getforma();
};
CHerencia::CHerencia(){}
CHerencia::CHerencia(int px, int py, int pdx, int pdy)
{
	x = px; y = py; dx = pdx; dy = pdy; alto = 1; ancho = 1;
}
void CHerencia::Borrar()
{
	Console::SetCursorPosition(x, y);   cout << " ";
}
void CHerencia::Mover()
{
	x = x + dx;
	if (x+ancho >= 119) dx= 0;
}
int CHerencia::Getx() { return x; }
int CHerencia::Gety() { return y; }
int CHerencia::Getalto() { return alto; }
int CHerencia::Getancho() { return ancho; }
int CHerencia::Getforma() { return forma; }