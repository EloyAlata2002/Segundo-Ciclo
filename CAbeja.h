#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
using namespace System;
class CAbeja
{
private:
	int x, y;
	int dx, dy;
	int ancho, alto;
public:
	CAbeja()
	{
		x = rand() % 15 + 1;
		y = 1 + rand() % 15;
		dx = 1; dy = 1;
		ancho = 7; alto = 5;
	}
	void Dibuja()
	{
		if (dx > 0) {
			Console::SetCursorPosition(x, y);
			cout << "  , -.";
			Console::SetCursorPosition(x, y + 1);
			cout << "  \\  /";
			Console::SetCursorPosition(x, y + 2);
			cout << " {|||)<";
			Console::SetCursorPosition(x, y + 3);
			cout << "  /  \\";
			Console::SetCursorPosition(x, y + 4);
			cout << "  `- ^";
		}
		if (dx < 0) {
			Console::SetCursorPosition(x, y);
			cout << "  , -.";
			Console::SetCursorPosition(x, y + 1);
			cout << "  \\  /";
			Console::SetCursorPosition(x, y + 2);
			cout << " >(|||}";
			Console::SetCursorPosition(x, y + 3);
			cout << "  /  \\";
			Console::SetCursorPosition(x, y + 4);
			cout << "  `- ^";
		}
	}
	void Borra()
	{
		Console::SetCursorPosition(x, y);
		cout << "          ";
		Console::SetCursorPosition(x, y + 1);
		cout << "          ";
		Console::SetCursorPosition(x, y + 2);
		cout << "          ";
		Console::SetCursorPosition(x, y + 3);
		cout << "          ";
		Console::SetCursorPosition(x, y + 4);
		cout << "	       ";
	}
	void Mover()
	{
		if (x + ancho + dx > 100 || x + dx < 0) dx *= -1;
		if (y + alto + dy > 30 || y + dy < 0)dy *= -1; 
		x += dx;
		y += dy;
	}
};