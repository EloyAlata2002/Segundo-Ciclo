#pragma once
#include "CBala.h"
#include <vector>
class CAvion
{
private:
	int x, y, dx, ancho;
	vector<CBala> VecBalas;
public:
	CAvion(int _x, int _y);
	~CAvion();
	//del avion
	void Pinta();
	void Borra();
	void Mueve();
	//de la bala
	void MostrarBalas();
	void MoverBalas();
	void BorrarBalas();
	void InsertarBalita();
	void AnalizaryEliminar();
};
CAvion::CAvion(int _x, int _y) { x = _x, y = _y; dx = 1; ancho = 19; }
CAvion::~CAvion(){}
//del avion
void CAvion::Pinta()
{
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(x, y);	cout<<"       __|__       ";
	Console::SetCursorPosition(x, y+1);	cout<<"--o--o--(_)--o--o--";
}
void CAvion::Borra()
{
	Console::SetCursorPosition(x, y);       cout<<"                   ";
	Console::SetCursorPosition(x, y + 1);	cout<<"                   ";
}
void CAvion::Mueve()
{
	if (x + dx <= 0 || x + dx + ancho >= 100) dx *= -1;
	x += dx;
}
//de la bala
void CAvion::MostrarBalas()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i].Pinta();
	
}
void CAvion::BorrarBalas()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i].Borra();
}
void CAvion::MoverBalas()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i].Mueve();
}	
void CAvion::InsertarBalita()
{
	VecBalas.push_back(CBala(x + 9, y - 1));
}
void CAvion::AnalizaryEliminar()
{
	if (VecBalas.size() > 0)
	{
		//analizar el primero siempre
		if (VecBalas[0].GetY() == 0)	
			VecBalas.erase(VecBalas.begin());
	}	
}