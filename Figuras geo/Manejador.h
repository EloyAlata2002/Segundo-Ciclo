#pragma once
#include "Cuadrado.h"
#include "Triangulo.h"
class CManeja
{
private:
	CCuadrado objcua1;
	CCuadrado objcua2;
	CTriangulo objtri1;
public:
	CManeja();
	void Generar();
	void Mostrar();
	void Mover();
	void Borrar();
};
CManeja::CManeja() {}
void CManeja::Generar()
{
	objcua1 = CCuadrado(1, 1, 1, 4, 15);
	objcua2 = CCuadrado(40, 12, -1, 3, 11);
	objtri1 = CTriangulo(10, 18, 1, 5, 'G');
}
void CManeja::Mostrar()
{
	objcua1.Mostrar(); objcua2.Mostrar(); objtri1.Mostrar();
}
void CManeja::Mover()
{
	objcua1.Mover(); objcua2.Mover(); objtri1.Mover();
}
void CManeja::Borrar()
{
	objcua1.Borrar(); objcua2.Borrar(); objtri1.Borrar();
}