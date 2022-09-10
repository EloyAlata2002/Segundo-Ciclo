#pragma once
#pragma once
#include <vector>
#include "CCuadrado.h"
class CManejador
{
private:
	vector<CCuadrado>vec;
public:
	CManejador();
	void InsertaAlFinal();
	void EliminarAlInicio();
	void CambiarColorTodos();
	void MostrarTodos();
	void BorrarTodos();
	void MoverTodos();
};
CManejador::CManejador() { }
void CManejador::InsertaAlFinal()
{
	Random f;
	vec.push_back(CCuadrado(2, 0, f.Next(1, 16)));
}
void CManejador::CambiarColorTodos()
{
	Random f;
	for (int i = 0; i < vec.size(); i++)
		vec[i].setColor(f.Next(1, 16));
}
void CManejador::MostrarTodos()
{
	for (int i = 0; i < vec.size(); i++)
		vec[i].Mostrar();
}
void CManejador::MoverTodos()
{
	for (int i = 0; i < vec.size(); i++)
		vec[i].Mover();
}
void CManejador::BorrarTodos()
{
	for (int i = 0; i < vec.size(); i++)
		vec[i].Borrar();
}
void CManejador::EliminarAlInicio()
{
	if (vec.size() > 0)
		vec.erase(vec.begin());
}