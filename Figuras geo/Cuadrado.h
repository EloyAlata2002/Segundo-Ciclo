#pragma once
#include "Figura.h" //llamas al archivo del papa
#include "iostream"
using namespace std;
using namespace System;
class CCuadrado : public CFigura // hijo de CFigura
{
private:
	int color;
public:
	CCuadrado();
	CCuadrado(int _x, int _y, int _dx, int _N, int _color);
	void Mostrar();
	void Borrar();
};
CCuadrado::CCuadrado() {}
CCuadrado::CCuadrado(int _x, int _y, int _dx, int _N, int _color) :CFigura(_x, _y, _dx, _N)
{
	color = _color;
}
void CCuadrado::Mostrar()
{
	int px = x, py = y;
	Console::ForegroundColor = (ConsoleColor)color;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= N; col++)
			cout << "*";
		py++;
	}
}
void CCuadrado::Borrar()
{
	int px = x, py = y;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= N; col++)
			cout << " ";
		py++;
	}
}