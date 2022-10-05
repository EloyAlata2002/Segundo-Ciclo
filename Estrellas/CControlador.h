#pragma once
#include "CEstrella.h"
#include "CMonigote.h"
#include "CHerencia.h"
#include <vector>
class CControlador
{
private:
	
	vector <CHerencia*> vecestre;
	CMonigote obj;
public:
	CControlador();
	void GenerarEstrellas();
	void DibujarEstrellas();
	void BorrarEstrellas();
	void MoverEstrellas();
	void MoverMonigote(int tecla);
	int MostrarPuntos();
	void EliminarEstrella();

};
CControlador::CControlador() {}
void CControlador::GenerarEstrellas()
{
	Random f;
	for (int i = 0; i <=50; i++)
	{
		vecestre.push_back(new CEstrella(f.Next(2, 90), 1, 0, f.Next(1, 5)));
	}
}
void CControlador::DibujarEstrellas()
{
	for (int i = 0; i < vecestre.size(); i++)
		vecestre[i]->DibujarEstre();
	obj.Dibuja();
}
void CControlador::BorrarEstrellas()
{
	for (int i = 0; i < vecestre.size(); i++)
		vecestre[i]->Borrar();
	obj.Borra();
}
void CControlador::MoverEstrellas()
{
	for (int i = 0; i < vecestre.size(); i++)
		vecestre[i]->Mover();
}
void CControlador::MoverMonigote(int tecla)
{
	obj.Mueve(tecla);
}
int CControlador::MostrarPuntos()
{
	return obj.GetContador();
}
void CControlador::EliminarEstrella()
{
	if (vecestre.size() > 0)
	{
		//analizar el primero siempre
			if (vecestre[0]->getdy() ==0)
				vecestre.erase(vecestre.begin());
	}
}