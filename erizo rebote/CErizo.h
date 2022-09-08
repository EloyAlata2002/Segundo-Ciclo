#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CErizo
{
private:
	int x, y;
	int dx, dy;
	int ancho, alto;
public:
	CErizo()
	{
		x = 1 + rand() % +99;
		y = 1 + rand() % +29;
		dx = 1; dy = 1;
		ancho = 16; alto = 4;
	};
	~CErizo(){};
	void Pinta()
	{
		if (dx > 0) 
		{
			Console::SetCursorPosition(x, y);
			cout << " .|||||||||.";
			Console::SetCursorPosition(x, y + 1);
			cout << "|||||||||||||";
			Console::SetCursorPosition(x, y + 2);
			cout << "|||||||||||' .\\";
			Console::SetCursorPosition(x, y + 3);
			cout << "`||||||||||_,__o";
		}
		if (dx < 0)
		{
			Console::SetCursorPosition(x, y);
			cout << "   .|||||||||.";
			Console::SetCursorPosition(x, y + 1);
			cout << "  |||||||||||||";
			Console::SetCursorPosition(x, y + 2);
			cout << " /. `|||||||||||";
			Console::SetCursorPosition(x, y + 3);
			cout << "o__,_||||||||||'";
		}
	}
	void Borra()
	{
		Console::SetCursorPosition(x, y);
		cout << "                 ";
		Console::SetCursorPosition(x, y + 1);
		cout << "                 ";
		Console::SetCursorPosition(x, y + 2);
		cout << "                 ";
		Console::SetCursorPosition(x, y + 3);
		cout << "                 ";
	}
	void Mueve()
	{
		if (x + dx + ancho > 100 || x + dx < 0) dx *= -1;
		if (y + dy + alto > 30 || y + dy < 0) dy *= -1;
		x += dx;
		y += dy;
	}
};

