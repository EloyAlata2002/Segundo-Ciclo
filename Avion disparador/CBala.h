#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
using namespace System;
class CBala
{
private:
	int x, y;
	int dy;
public:
	CBala(int _x, int _y);
	int GetY();
	void Pinta();
	void Mueve();
	void Borra();
};

CBala::CBala(int _x, int _y) { x = _x; y = _y; dy = -1; }
int CBala::GetY() { return y; }
void CBala::Mueve()
{
	y = y + dy;
	if (y == 0) dy = 0;
}
void CBala::Pinta()
{
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y);   cout << "@";
}
void CBala::Borra()
{
	Console::SetCursorPosition(x, y);   cout << " ";
}
