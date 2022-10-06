#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CVirus
{
protected:
	int x, y, dx, dy, alto, ancho;
	int forma,color;
public:
	CVirus();
	CVirus(int px, int py,int pdx,int pdy);
	virtual void Dibuja() {};
	void Mover();
	virtual void Borra() {};
	int Getx();
	int Gety();
	int Getalto();
	int Getancho();
	int Getforma();
	void Setcolor(int pcolor);
	int Getcolor();
	virtual void Dejademoverse() {};
};
CVirus::CVirus(){}
CVirus::CVirus(int px, int py, int pdx, int pdy)
{
	x = px; y = py; dx = pdx; dy = pdy;
}
void CVirus::Mover()
{
	if (x + dx < 0 || x + dx + ancho>120) dx *= -1;
	if (y + dy < 0 || y + dy + alto>30) dy *= -1;
	x += dx;
	y += dy;
}
int CVirus::Getx()    {return x;}
int CVirus::Gety()    {return y;}
int CVirus::Getalto() {return alto;}
int CVirus::Getancho(){return ancho;}
int CVirus::Getforma() { return forma; }
void CVirus::Setcolor(int pcolor) { color = pcolor; }
int CVirus::Getcolor() { return color; }

