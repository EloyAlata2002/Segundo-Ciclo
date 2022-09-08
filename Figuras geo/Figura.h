#pragma once
class CFigura
{
protected: //indica que los hijos pueden usar estos atributos heredados
	int x, y, dx, N; //N tamaño de la figura
public:
	CFigura();
	CFigura(int _x, int _y, int _dx, int N);
	void Mover();
};
CFigura::CFigura() {}
CFigura::CFigura(int _x, int _y, int _dx, int _N)
{
	x = _x; y = _y; dx = _dx; N = _N;
}
void CFigura::Mover()
{
	if (x + dx < 0 || x + dx + N > 79)
		dx = dx * -1;
	x = x + dx;
}