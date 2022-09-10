#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CRaton
{
private:
	int x, y;
	int ancho, alto;
	int dx, dy;
public:
	CRaton();
	void Muestra();
	void Borra();
	void Mueve();
};

CRaton::CRaton()
{
	x = rand() % 15 + 1;
	y = 1 + rand() % 15;
	dx = 1;
	dy = 1;
	ancho = 20;
	alto = 3;
}
void CRaton::Muestra()
{
	if (dx > 0) {
		Console::SetCursorPosition(x, y);     cout << "     ____()()   ";
		Console::SetCursorPosition(x, y + 1); cout << "    /       @@  ";
		Console::SetCursorPosition(x, y + 2); cout << "~~~~\\_;m__m._>o";
	}
	else {
		if (dx < 0) {
			Console::SetCursorPosition(x, y);     cout << "     ()()_____     ";
			Console::SetCursorPosition(x, y + 1); cout << "    @@        \\    ";
			Console::SetCursorPosition(x, y + 2); cout << "   o<_.m__m;_//~~~~";
		}
	}
}
void CRaton::Borra()
{
	Console::SetCursorPosition(x, y);     cout << "                   ";
	Console::SetCursorPosition(x, y + 1); cout << "                   ";
	Console::SetCursorPosition(x, y + 2); cout << "                   ";
}
void CRaton::Mueve()
{
	if (x + ancho + dx > 100 || x + dx < 0) dx *= -1;
	if (y + alto + dy > 30 || y + dy < 0)dy *= -1;
	x += dx;
	y += dy;
}
