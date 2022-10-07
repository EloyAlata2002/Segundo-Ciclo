#pragma once
#include "CDiamante.h"
#include "CTrebol.h"
#include "CMonigote.h"
#include "CMurcielago.h"
#include <vector>
class CControlador
{
private:
	vector<CHerencia*>VecBalas;
	CMurcielago Disparador;
	CMonigote Jugador;
public:
	CControlador();
	void GenerarBalas();
	void DibujaBalas_Murcielago_Monigote();
	void BorraBalas_Murcielado_Monigote();
	void MueveBalas_Murcielago();
	void MueveMonigote(int tecla);
	void Colision_Monigote_Trebol();
	void Colision_Monigote_Diamante();
	void EliminarBalas();
	int TotaldeVidas();
	int TotalDiamantes();
};
CControlador::CControlador(){}
void CControlador::GenerarBalas()
{
	Random f;
	int tipo = f.Next(1, 3);
		if (tipo == 1)
		{
			VecBalas.push_back(new CTrebol(Disparador.Getx() + 16, Disparador.Gety() + 1, f.Next(1, 3), 0));
		}
		if (tipo == 2)
		{
			VecBalas.push_back(new CDiamante(Disparador.Getx() + 16, Disparador.Gety() + 1, 2, 0));
		}
	
}
void CControlador::DibujaBalas_Murcielago_Monigote()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i]->Dibuja();
	Disparador.Dibuja();
	Jugador.dibujar();
}
void CControlador::BorraBalas_Murcielado_Monigote()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i]->Borrar();
	Disparador.Borra();
	Jugador.borrar();
}
void CControlador::MueveBalas_Murcielago()
{
	for (int i = 0; i < VecBalas.size(); i++)
		VecBalas[i]->Mover();
	Disparador.Mueve();
}
void CControlador::MueveMonigote(int tecla)
{
	Jugador.mover(tecla);
}
void CControlador::Colision_Monigote_Trebol()
{
	if (VecBalas.size() > 2)
	{
		for (int i = 0; i < VecBalas.size(); i++)
		{
			if (VecBalas[i]->Getforma() == 1)
			{
				int x1 = VecBalas[i]->Getx();
				int y1 = VecBalas[i]->Gety();
				int alto1 = VecBalas[i]->Getalto();
				int ancho1 = VecBalas[i]->Getancho();

				int x2 = Jugador.getX();
				int y2 = Jugador.getY();
				int alto2 = Jugador.getalto();
				int ancho2 = Jugador.getancho();

				if (!(x1 + ancho1<x2 || y1 + alto1<y2 || x1>x2 + ancho2 || y1>y2 + alto2))
				{
					Jugador.PierdeVidas();
				}
			}
		}
	}
}
void CControlador::Colision_Monigote_Diamante()
{
	if (VecBalas.size() > 2)
	{
		for (int i = 0; i < VecBalas.size(); i++)
		{
			if (VecBalas[i]->Getforma() == 2)
			{
				int x1 = VecBalas[i]->Getx();
				int y1 = VecBalas[i]->Gety();
				int alto1 = VecBalas[i]->Getalto();
				int ancho1 = VecBalas[i]->Getancho();

				int x2 = Jugador.getX();
				int y2 = Jugador.getY();
				int alto2 = Jugador.getalto();
				int ancho2 = Jugador.getancho();

				if (!(x1 + ancho1<x2 || y1 + alto1<y2 || x1>x2 + ancho2 || y1>y2 + alto2))
				{
					Jugador.GanaVidas();
					Jugador.ContadorDiamantes();
				}
			}
		}
	}
}
int CControlador::TotaldeVidas()
{
	return Jugador.Getvidas();
}
int CControlador::TotalDiamantes()
{
	return Jugador.GetDiamantes();
}
void CControlador::EliminarBalas()
{
	if (VecBalas.size() > 0)
	{
		for (int i = 0; i < VecBalas.size(); i++) {
			if (VecBalas[i]->Getx() == 118)
				VecBalas.erase(VecBalas.begin()+i);
		}
	}
}