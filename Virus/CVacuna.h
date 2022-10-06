#pragma once
#include "iostream"
using namespace std;
using namespace System;
#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
class CVacuna {
private:
	int x, y, dx, dy, ancho, alto;
public:
	CVacuna();
	void dibujar();
	void borrar();
	void mover(int tecla);
	int getX();
	int getY();
	int getalto();
	int getancho();
};
CVacuna::CVacuna() {
	ancho = 2; alto = 1; x = 40; y = 18; dx = 0; dy = 0;
}
void CVacuna::dibujar()
{
	Console::ForegroundColor = ConsoleColor::Cyan;
	if (dx > 0)
	{
		Console::SetCursorPosition(x, y);     cout << "├>";
	}
	else
	{
		Console::SetCursorPosition(x, y);     cout << "<├";
	}
}
void CVacuna::borrar() 
{
	Console::SetCursorPosition(x, y);     cout << "  ";
}
void CVacuna::mover(int tecla)
{
	switch (tecla)
	{
	case arriba: dy = -1; dx = 0; break;
	case abajo: dy = 1; dx = 0; break;
	case derecha: dy = 0; dx = 1; break;
	case izquierda: dy = 0; dx = -1; break;
	}
	if (x + dx < 0 || x + dx + ancho> 120) dx *= -1;
	if (y + dy < 0 || y + dy + alto > 30) dy *= -1;
	x += dx;
	y += dy;
}
int CVacuna::getX() { return x; }
int CVacuna::getY() { return y; }
int CVacuna::getalto() { return alto; }
int CVacuna::getancho() { return ancho; }