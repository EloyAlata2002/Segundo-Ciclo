#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class CColeccion
{
private:
	vector<int> Vnumeros;
public:
	CColeccion();
	void agregar(int dato);
	void insertar_al_inicio(int dato);
	void insertar_al_final(int dato);
	void insertar_en_posicion(int dato, int posicion);
	void eliminar_al_inicio();
	void eliminar_al_final();
	void eliminar_en_posicion(int posicion);
	void ordenar();
	void mostrar();
	vector <int> getVector();
};
CColeccion::CColeccion(){}
void CColeccion::agregar(int dato) { Vnumeros.push_back(dato); }
void CColeccion::insertar_al_inicio(int dato) { Vnumeros.insert(Vnumeros.begin(), dato); }
void CColeccion::insertar_al_final(int dato)  { Vnumeros.insert(Vnumeros.end(), dato); }
void CColeccion::insertar_en_posicion(int dato, int posicion) 
{
	Vnumeros.insert(Vnumeros.begin() + posicion, dato);
}
void CColeccion::eliminar_al_inicio(){ Vnumeros.erase(Vnumeros.begin()); }
void CColeccion::eliminar_al_final() { Vnumeros.erase(Vnumeros.end() - 1); }
void CColeccion::eliminar_en_posicion(int posicion) {
	Vnumeros.erase(Vnumeros.begin() + posicion);
}
void CColeccion::ordenar()
{
	sort(Vnumeros.begin(), Vnumeros.end());
}
void CColeccion::mostrar()
{
	for (int i = 0; i < Vnumeros.size(); i++)
		cout << Vnumeros[i] << " ";
	    cout << endl;
}
vector <int> CColeccion::getVector() { return Vnumeros; }