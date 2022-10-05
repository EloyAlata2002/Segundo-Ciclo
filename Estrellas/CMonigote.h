#pragma once
#include "iostream"
#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77
using namespace std;
using namespace System;
class CMonigote
{
private:
	int x, y, dx, dy, alto, ancho, contador,color1,color2;
public:
	
	CMonigote();
	void Dibuja();
	void Borra();
	void Mueve(int tecla);
	int Getx();
	int Gety();
	int Getancho();
	int Getalto();
	int GetContador();
};
CMonigote::CMonigote()
{
	Random f;
	x = 40; y = 18; dx = 0; dy = 0; alto = 2; ancho = 1; contador = 0; 
	color1 = f.Next(1, 10);
	color2 = f.Next(1, 10);
}
void CMonigote::Dibuja()
{
	Random f;
	int color = f.Next(1, 10);
	Console::ForegroundColor = (ConsoleColor)color1;
	Console::SetCursorPosition(x, y);   cout << (char)64;
	Console::ForegroundColor = (ConsoleColor)color2;
	Console::SetCursorPosition(x, y + 1); cout << (char)197;
}
void CMonigote::Borra()
{
	Console::SetCursorPosition(x, y);     cout << " ";
	Console::SetCursorPosition(x, y + 1); cout << " ";
}
void CMonigote::Mueve(int tecla)
{
	switch (tecla)
	{
	case arriba: dy = -1; dx = 0; break;
	case abajo: dy = 1; dx = 0; break;
	case derecha: dy = 0; dx = 1; break;
	case izquierda: dy = 0; dx = -1;
	}
	if (x + dx < 0 || x + dx + ancho>79) dx *= -1;
	if (y + dy < 0 || y + dy + alto>24) dy *= -1;
	x += dx;
	y += dy;
}
int CMonigote::Getx() { return x; }
int CMonigote::Gety() { return y; }
int CMonigote::Getancho() { return ancho; }
int CMonigote::Getalto() { return alto; }
int CMonigote::GetContador() { return contador; }