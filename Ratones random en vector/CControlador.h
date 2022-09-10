#pragma once
#include "CRaton.h"
#include <vector>
class CControlador
{
private:
	vector<CRaton>VecRaton;
public:
	CControlador();
	void PintaRatones();
	void BorraRatones();
	void MueveRatones();
	void InsertarRatones();
};
CControlador::CControlador(){}
void CControlador::PintaRatones()
{
	for (int i = 0; i < VecRaton.size(); i++)
		VecRaton[i].Muestra();
}
void CControlador::BorraRatones()
{
	for (int i = 0; i < VecRaton.size(); i++)
		VecRaton[i].Borra();
}
void CControlador::MueveRatones()
{
	for (int i = 0; i < VecRaton.size(); i++)
		VecRaton[i].Mueve();
}
void CControlador::InsertarRatones()
{
	VecRaton.push_back(CRaton());
}
