#pragma once
#include "CHerencia.h"
#include "iostream"
using namespace std;
using namespace System;
class CDiamante :public CHerencia
{
private:
public:
	CDiamante();
	CDiamante(int px, int py, int pdx, int pdy);
	void Dibuja();
};
CDiamante::CDiamante() {}
CDiamante::CDiamante(int px, int py, int pdx, int pdy) : CHerencia(px, py, pdx, pdy)
{
	forma = 2;
}
void CDiamante::Dibuja()
{
	Console::ForegroundColor = ConsoleColor::Cyan;
	Console::SetCursorPosition(x, y);     cout << (char)4;
}
