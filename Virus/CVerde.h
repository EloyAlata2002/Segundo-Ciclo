#pragma once
#include "CVirus.h"
#include "iostream"
using namespace std;
using namespace System;
class CVerde :public CVirus
{
private:
public:
	CVerde();
	CVerde(int px, int py, int pdx, int pdy);
	void Dibuja();
	void Borra();
};
CVerde::CVerde() {}
CVerde::CVerde(int px, int py, int pdx, int pdy) : CVirus(px, py, pdx, pdy)
{
	forma = 2; alto = 5; ancho = 9;	color = 10;
}
void CVerde::Dibuja()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);     cout << "    q    ";
	Console::SetCursorPosition(x, y + 1); cout << " o.-o-.o ";
	Console::SetCursorPosition(x, y + 2); cout << "o-(ooo)-o";
	Console::SetCursorPosition(x, y + 3); cout << " o.-o-.o ";
	Console::SetCursorPosition(x, y + 4); cout << "    b    ";
}
void CVerde::Borra()
{
	Console::SetCursorPosition(x, y);     cout << "         ";
	Console::SetCursorPosition(x, y + 1); cout << "         ";
	Console::SetCursorPosition(x, y + 2); cout << "         ";
	Console::SetCursorPosition(x, y + 3); cout << "         ";
	Console::SetCursorPosition(x, y + 4); cout << "         ";
}