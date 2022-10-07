#pragma once
#include "CHerencia.h"
#include "iostream"
using namespace std;
using namespace System;
class CTrebol :public CHerencia
{
private:
public:
	CTrebol();
	CTrebol(int px, int py, int pdx, int pdy);
	void Dibuja();
};
CTrebol::CTrebol() {}
CTrebol::CTrebol(int px, int py, int pdx, int pdy) : CHerencia(px, py, pdx, pdy)
{
	forma = 1;
}
void CTrebol::Dibuja()
{
	Console::ForegroundColor = ConsoleColor::Green;
	Console::SetCursorPosition(x, y);     cout <<(char)5;
}