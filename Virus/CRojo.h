#pragma once
#include "CVirus.h"
#include "iostream"
using namespace std;
using namespace System;
class CRojo:public CVirus
{
private:
public:
	CRojo();
	CRojo(int px,int py,int pdx, int pdy);
	void Dibuja();
	void Borra();
};
CRojo::CRojo(){}
CRojo::CRojo(int px, int py,int pdx, int pdy):CVirus(px,py,pdx,pdy)
{
	forma = 1; alto = 5; ancho = 9; color = 12;
}
void CRojo::Dibuja()
{
	Console::ForegroundColor = (ConsoleColor)color;
	Console::SetCursorPosition(x,y);   cout<<"    q    ";
	Console::SetCursorPosition(x,y+1); cout<<" o.-o-.o ";
	Console::SetCursorPosition(x,y+2); cout<<"o-(ooo)-o";
	Console::SetCursorPosition(x,y+3); cout<<" o.-o-.o ";
	Console::SetCursorPosition(x,y+4); cout<<"    b    ";
}
void CRojo::Borra()
{
	Console::SetCursorPosition(x, y);     cout << "         ";
	Console::SetCursorPosition(x, y + 1); cout << "         ";
	Console::SetCursorPosition(x, y + 2); cout << "         ";
	Console::SetCursorPosition(x, y + 3); cout << "         ";
	Console::SetCursorPosition(x, y + 4); cout << "         ";
}
