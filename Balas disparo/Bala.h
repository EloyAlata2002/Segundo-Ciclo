#pragma once
#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CBala
{
private:
	int x, y, dy;
public:
	CBala(int _x, int _y);
	int getY();
	void Mostrar();
	void Mover();
	void Borrar();
};
CBala::CBala(int _x, int _y)
{
	x = _x; y = _y; dy = -1;
}
int CBala::getY() { return y; }
void CBala::Mover()
{
	y = y + dy;
	if (y == 0) dy = 0;
}
void CBala::Mostrar()
{
	Console::SetCursorPosition(x, y);
	cout << "*";
}
void CBala::Borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}