#pragma once
#include <iostream>
using namespace std;
using namespace System;

class Llanta{
private:
	int x, y;
public:
	Llanta(int px, int py) {
		x = px;
		y = py;
	}
	void dibujar(ConsoleColor color) {
		Console::ForegroundColor = color;
		Console::SetCursorPosition(x, y);
		cout << char(219);
	}
	void borrar() {
		Console::SetCursorPosition(x, y);
		cout << " ";
	}
	void mover(int dx) {
		x += dx;
	}

};