#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CMurcielago
{
private:
	int x, y, dx, dy, alto, ancho;
public:
	CMurcielago();
	void Dibuja();
	void Borra();
	void Mueve();
	int Getx();
	int Gety();
};
CMurcielago::CMurcielago()
{
	x = 2; y = 10; dx = 0; dy = 2; ancho = 15; alto = 4;
}
void CMurcielago::Dibuja()
{
	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(x,y); cout<<"  _   ,_,   _";
	Console::SetCursorPosition(x,y+1); cout<<" / `'=) (='` \\";
	Console::SetCursorPosition(x,y+2); cout<<"/.-.-.\\ /.-.-.\\";
	Console::SetCursorPosition(x,y+3); cout<<"`      \"      `";
}
void CMurcielago::Borra()
{
	Console::SetCursorPosition(x, y);   cout << "               ";
	Console::SetCursorPosition(x, y+1); cout << "               ";
	Console::SetCursorPosition(x, y+2); cout << "               ";
	Console::SetCursorPosition(x, y+3); cout << "               ";
}
void CMurcielago::Mueve()
{
	if (x + dx < 0 || x + dx + ancho>120) dx = dx * -1;
	if (y + dy < 0 || y + dy + alto>30) dy = dy * -1;
	x = x + dx;
	y = y + dy;
}
int CMurcielago::Getx(){return x;}
int CMurcielago::Gety(){return y;}