#pragma once
#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
using namespace System;
class CCuadrado
{
private:
	int x, y;
	int dx, dy;
	int color;
public:
	CCuadrado(int _x, int _y, int _color);
	void setColor(int _color);
	void Mostrar();
	void Mover();
	void Borrar();
};
CCuadrado::CCuadrado(int _x, int _y, int _color)
{
	x = _x; y = _y; color = _color;
	dx = 1; dy = 0;
}
void CCuadrado::setColor(int _color)
{
	color = _color;
}
void CCuadrado::Mostrar()
{
	Console::SetCursorPosition(x, y);
	Console::ForegroundColor = (ConsoleColor)color;
	cout << (char)219;
}
void CCuadrado::Mover()
{
	if (x == 79 && y == 0) { dx = 0; dy = 1; }
	if (x == 79 && y == 23) { dx = -1; dy = 0; }
	if (x == 0 && y == 23) { dx = 0; dy = -1; }
	if (x == 0 && y == 0) { dx = 1; dy = 0; }
	x = x + dx;
	y = y + dy;
}
void CCuadrado::Borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}