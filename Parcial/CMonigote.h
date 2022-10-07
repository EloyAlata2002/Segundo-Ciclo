#pragma once
#include "iostream"
using namespace std;
using namespace System;
#define arriba 72
#define abajo 80
class CMonigote {
private:
	int x, y, dx, dy, ancho, alto;
	int vidas,contadiamantes;
public:
	CMonigote();
	void dibujar();
	void borrar();
	void mover(int tecla);
	int getX();
	int getY();
	int getalto();
	int getancho();
	void PierdeVidas();
	void GanaVidas();
	int Getvidas();
	void ContadorDiamantes();
	int GetDiamantes();
};
CMonigote::CMonigote() {
	ancho = 2; alto = 1; x = 115; y = 18; dx = 0; dy = 0; vidas = 1; contadiamantes = 0;
}
void CMonigote::dibujar()
{
	Console::ForegroundColor = ConsoleColor::Yellow;
	Console::SetCursorPosition(x, y);     cout << "0";
	Console::SetCursorPosition(x, y+1);   cout << "┼";
}
void CMonigote::borrar()
{
	Console::SetCursorPosition(x, y);     cout << " ";
	Console::SetCursorPosition(x, y+1);   cout << " ";
}
void CMonigote::mover(int tecla)
{
	switch (tecla)
	{
	case arriba: dy = -1; dx = 0; break;
	case abajo: dy = 1; dx = 0; break;
	}
	if (y + dy < 0 || y + dy + alto > 30) dy *= -1;
	y += dy;
}
int CMonigote::getX() { return x; }
int CMonigote::getY() { return y; }
int CMonigote::getalto() { return alto; }
int CMonigote::getancho() { return ancho; }
void CMonigote::PierdeVidas() { vidas--; }
void CMonigote::GanaVidas() { vidas++; }
void CMonigote::ContadorDiamantes() { contadiamantes++; }
int  CMonigote::Getvidas() { return vidas; }
int CMonigote::GetDiamantes() { return contadiamantes; }