#pragma once
#include "CVirus.h"
#include "iostream"
using namespace std;
using namespace System;
class CMonigote :public CVirus
{
private:
public:
	CMonigote();
	CMonigote(int px, int py, int pdx, int pdy);
	void Dibuja();
	void Borra();
	void Dejademoverse();

};
CMonigote::CMonigote() {}
CMonigote::CMonigote(int px, int py, int pdx, int pdy) :CVirus(px, py, pdx, pdy)
{
	forma = 3; alto = 2; ancho = 1; color = 15;
}
void CMonigote::Dibuja()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x, y);     cout << "O";
	Console::SetCursorPosition(x, y + 1); cout << "┼";
}
void CMonigote::Borra()
{
	Console::SetCursorPosition(x, y);     cout << " ";
	Console::SetCursorPosition(x, y + 1); cout << " ";
}
void CMonigote::Dejademoverse()	
{
	dx = 0; dy = 0;
}
