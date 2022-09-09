#pragma once
#include <vector>
#include "CCasa.h"
#include "CPista.h"
class CManejador
{
private:
	vector<CCasa> veccasas;
	vector<CPista> vecpistas;
public:
	CManejador();
	~CManejador();
	void InsertarCasa(int posx, int posy);
	void InsertarPista(int posx, int posy);
	void MostrarTodos();
};
CManejador::CManejador(){}
CManejador::~CManejador(){}
void CManejador::InsertarCasa(int posx, int posy)
{
	veccasas.push_back(CCasa(posx, posy));
}
void CManejador::InsertarPista(int posx, int posy)
{
	vecpistas.push_back(CPista(posx, posy));
}
void CManejador::MostrarTodos()
{
	for each (CCasa obj in veccasas)
		obj.Mostrar();
	for each (CPista obj in vecpistas)
		obj.Mostrar();
}