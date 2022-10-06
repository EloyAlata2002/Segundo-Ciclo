#pragma once
#include "CRojo.h"
#include "CVerde.h"
#include "CMonigote.h"
#include "CVacuna.h"
#include <vector>
class CControlador
{
private:
	vector<CVirus*> vecVi;
	CVacuna objvacu;
public:
	CControlador();
	void GenerarVirusyMonigote();
	void DibujarVirusyMonigote();
	void BorrarVirusyMonigote();
	void MoverVirusyMonigote();
	void MoverVacuna(int tecla);
	void colisionRojoMonigote();
	void colisionVerdeMonigote();
	int colisionVacunaRojo();
	int colisionVacunaVerde();
};
CControlador::CControlador(){}
void CControlador::GenerarVirusyMonigote()
{
	Random V;
	for (int i = 0; i < V.Next(1, 10); i++)
		vecVi.push_back(new CRojo(V.Next(0, 100), V.Next(0, 22),0,V.Next(1,3)));
	for (int i = 0; i < V.Next(1, 10); i++)
		vecVi.push_back(new CVerde(V.Next(0, 100), V.Next(0, 22),V.Next(1,4),0));
	for (int i = 0; i < 16; i++)
		vecVi.push_back(new CMonigote(V.Next(0, 100), V.Next(0, 22), V.Next(1, 3), V.Next(1, 3)));
}
void CControlador::DibujarVirusyMonigote()
{
	for (int i = 0; i < vecVi.size(); i++)
		vecVi[i]->Dibuja();
	objvacu.dibujar();
}
void CControlador::BorrarVirusyMonigote()
{
	for (int i = 0; i < vecVi.size(); i++)
		vecVi[i]->Borra();
	objvacu.borrar();
}
void CControlador::MoverVirusyMonigote()
{
	for (int i = 0; i < vecVi.size(); i++)
		vecVi[i]->Mover();
}
void CControlador::MoverVacuna(int tecla)
{
	objvacu.mover(tecla);
}
void CControlador::colisionRojoMonigote()
{
	if (vecVi.size() > 2)
	{
		for (int i = 0; i < vecVi.size() - 1; i++)
			for (int j = i + 1; j < vecVi.size(); j++)
				if (vecVi[i]->Getforma() == 1 && vecVi[j]->Getforma() == 3|| vecVi[i]->Getforma() == 3 && vecVi[j]->Getforma() == 1)
				{	//algoritmo de colision
					int x1 = vecVi[i]->Getx();       int y1 = vecVi[i]->Gety();  
					int alto1 = vecVi[i]->Getalto(); int ancho1 = vecVi[i]->Getancho();
					int x2 = vecVi[j]->Getx(); int y2 = vecVi[j]->Gety();
					int alto2 = vecVi[j]->Getalto(); int ancho2 = vecVi[j]->Getancho();
					if (!(x1 + ancho1<x2 || y1 + alto1<y2 ||x1>x2 + ancho2 || y1>y2 + alto2))
					{
						//monigote no contagiado
						if (vecVi[i]->Getcolor() == 15) vecVi[i]->Setcolor(12); vecVi[i]->Dejademoverse();	
						if (vecVi[j]->Getcolor() == 15) vecVi[j]->Setcolor(12); vecVi[j]->Dejademoverse();
						//monigote contagiado
						if (vecVi[i]->Getforma() == 3 && (vecVi[i]->Getcolor() == 12 || vecVi[i]->Getcolor() == 10)) vecVi.erase(vecVi.begin() + i);
						if (vecVi[j]->Getforma() == 3 && (vecVi[j]->Getcolor() == 12 || vecVi[j]->Getcolor() == 10))  vecVi.erase(vecVi.begin() + j);
					}
				}
	}
}
void CControlador::colisionVerdeMonigote()
{
	if (vecVi.size() > 2)
	{
		for (int i = 0; i < vecVi.size() - 1; i++)
			for (int j = i + 1; j < vecVi.size(); j++)
				if (vecVi[i]->Getforma() == 2 && vecVi[j]->Getforma() == 3 || vecVi[i]->Getforma() == 3 && vecVi[j]->Getforma() == 2)
				{	//algoritmo de colision
					int x1 = vecVi[i]->Getx();       int y1 = vecVi[i]->Gety();
					int alto1 = vecVi[i]->Getalto(); int ancho1 = vecVi[i]->Getancho();
					int x2 = vecVi[j]->Getx();       int y2 = vecVi[j]->Gety();
					int alto2 = vecVi[j]->Getalto(); int ancho2 = vecVi[j]->Getancho();
					if (!(x1 + ancho1<x2 || y1 + alto1<y2 || x1>x2 + ancho2 || y1>y2 + alto2))
					{
						//monigote no contagiado
						if (vecVi[i]->Getcolor() == 15) vecVi[i]->Setcolor(10); 
						if (vecVi[j]->Getcolor() == 15) vecVi[j]->Setcolor(10);
						//monigote contagiado
						if (vecVi[i]->Getforma() == 3 && vecVi[i]->Getcolor() == 10)  vecVi.erase(vecVi.begin() + i);
						if (vecVi[j]->Getforma() == 3 && vecVi[j]->Getcolor() == 10)  vecVi.erase(vecVi.begin() + j);
					}
				}
	}
}
int CControlador::colisionVacunaRojo() 
{
	if (vecVi.size() > 2)
	{
		for (int i = 0; i < vecVi.size(); i++)
		{
			if (vecVi[i]->Getforma() == 1)
			{
				int x1 = vecVi[i]->Getx();
				int y1 = vecVi[i]->Gety();
				int alto1 = vecVi[i]->Getalto();
				int ancho1 = vecVi[i]->Getancho();

				int x2 = objvacu.getX();
				int y2 = objvacu.getY();
				int alto2 = objvacu.getalto();
				int ancho2 = objvacu.getancho();

				if (!(x1 + ancho1<x2 || y1 + alto1<y2 || x1>x2 + ancho2 || y1>y2 + alto2))
				{
					return 1;
				}
			}
		}
	}
}
int CControlador::colisionVacunaVerde()
{
	if (vecVi.size() > 2)
	{
		for (int i = 0; i < vecVi.size(); i++)
		{
			if (vecVi[i]->Getforma() == 2)
			{
				int x1 =     vecVi[i]->Getx();
				int y1 =     vecVi[i]->Gety();
				int alto1  = vecVi[i]->Getalto();
				int ancho1 = vecVi[i]->Getancho();

				int x2 = objvacu.getX();
				int y2 = objvacu.getY();
				int alto2 = objvacu.getalto();
				int ancho2 = objvacu.getancho();

				if (!(x1 + ancho1<x2 || y1 + alto1<y2 || x1>x2 + ancho2 || y1>y2 + alto2))
				{
					return 1;
				}
			}
		}
	}
}