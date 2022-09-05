#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CRaton
{
private:
	int x, y;
	int alto, ancho;
	int dx, dy;
public:
	CRaton() 
	{
		x = 1 + rand() % 99;
		y = 1 + rand() % 29;
		dx = 1; dy = 1;
		ancho = 16; alto = 3;
	}
	void Pinta()
	{
		Console::SetCursorPosition(x, y);
		cout << "       ____()()";
		Console::SetCursorPosition(x, y + 1);
		cout << "      /      @@";
		Console::SetCursorPosition(x, y + 2);
		cout << "`~~~~~\\_;m__m._>o";
	}
	void Borra()
	{
		Console::SetCursorPosition(x, y);
		cout << "                  ";
		Console::SetCursorPosition(x, y + 1);
		cout << "                  ";
		Console::SetCursorPosition(x, y + 2);
		cout << "                  ";
	}
	void Mueve()
	{
		if (x + dx < 0 || x + dx + ancho>100) dx *= -1;
		if (y + dy < 0 || y + dy + alto>30) dy *= -1;
		x += dx;
		y += dy;
	}
};