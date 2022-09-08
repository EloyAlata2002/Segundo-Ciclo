#pragma once
#include "Figura.h" //llamas al archivo del papa
#include "iostream"
class CTriangulo : public CFigura // hijo de CFigura
{
private:
	char car;
public:
	CTriangulo();
	CTriangulo(int _x, int _y, int _dx, int _N, int _car);
	void Mostrar();
	void Borrar();
};
CTriangulo::CTriangulo() {}
CTriangulo::CTriangulo(int _x, int _y, int _dx, int _N, int _car) :CFigura(_x, _y, _dx, _N)
{
	car = _car;
}
void CTriangulo::Mostrar()
{
	int px = x, py = y;
	Console::ForegroundColor = ConsoleColor::Cyan;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++)
			cout << car;
		py++;
	}
}
void CTriangulo::Borrar()
{
	int px = x, py = y;
	for (int fila = 1; fila <= N; fila++)
	{
		Console::SetCursorPosition(px, py);
		for (int col = 1; col <= fila; col++)
			cout << " ";
		py++;

	}
}