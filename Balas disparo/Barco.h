#pragma once
#pragma once
#include "Bala.h"
#include <vector>
class CBarco
{
private:
	//atributos del barco
	int x, y, dx, ancho;
	//atributos relacionado a la bala
	vector<CBala> VecBalas;
public:
	CBarco(int _x, int _y);
	//propios del movimiento del barco
	void Mostrar();
	void Mover();
	void Borrar();
	//propios de la balas
	void MostrarBalas();
	void MoverBalas();
	void BorrarBalas();
	void InsertarBalita();
	void AnalizaryEliminar();
};
CBarco::CBarco(int _x, int _y)
{
	x = _x; y = _y;
	dx = 1; ancho = 3;
}
void CBarco::Mostrar()
{
	Console::SetCursorPosition(x, y);       cout << " | ";
	Console::SetCursorPosition(x, y + 1);   cout << " | ";
	Console::SetCursorPosition(x, y + 2);   cout << "---";
}
void CBarco::Borrar()
{
	Console::SetCursorPosition(x, y);       cout << "   ";
	Console::SetCursorPosition(x, y + 1);   cout << "   ";
	Console::SetCursorPosition(x, y + 2);   cout << "   ";
}
void CBarco::Mover()
{
	if (x + dx < 0 || x + dx + ancho>79)
		dx = dx * -1;
	x = x + dx;
}
//propios de la bala
void CBarco::MostrarBalas()
{
	for each (CBala obj in VecBalas)
		obj.Mostrar();
}
void CBarco::MoverBalas()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i].Mover();
}
void CBarco::BorrarBalas()
{
	for each (CBala obj in VecBalas)
		obj.Borrar();
}
void CBarco::InsertarBalita()
{
	VecBalas.push_back(CBala(x + 1, y - 1));
}
void CBarco::AnalizaryEliminar()
{
	if (VecBalas.size() > 0)
	{
		//Analizar el primero siempre
		if (VecBalas[0].getY() == 0)
			VecBalas.erase(VecBalas.begin());
	}
}