#pragma once
#include "iostream"
#include "CHerencia.h"
using namespace std;
using namespace System;
class CEstrella : public CHerencia
{
private:
public:
	CEstrella();
	CEstrella(int px, int py, int pdx, int pdy);
	void DibujarEstre();
};
CEstrella::CEstrella() {}
CEstrella::CEstrella(int px, int py, int pdx, int pdy) :CHerencia(px, py, pdx, pdy)
{
	 forma = 1;
}
void CEstrella::DibujarEstre()
{
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(x, y); cout << "*";
}
