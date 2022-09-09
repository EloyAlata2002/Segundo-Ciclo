#pragma once
#include "iostream"
using namespace System;
using namespace std;
class CPista
{
private:
	int x, y;
public:
	CPista(int _x, int _y);
	void Mostrar();
};
CPista::CPista(int _x, int _y)
{
	x = _x; y = _y;
}
void CPista::Mostrar()
{
	Console::SetCursorPosition(x, y);
	for (int i = 1; i <= 30; i++)
		cout << char(205);
	Console::SetCursorPosition(x, y + 1); cout << "              ";
	Console::SetCursorPosition(x, y + 2);
	for (int i = 1; i <= 30; i++)
		cout << char(196);
	Console::SetCursorPosition(x, y + 3); cout << "              ";
	Console::SetCursorPosition(x, y+4);
	for (int i=1; i <= 30; i++)
		cout << char(205);
}