#pragma once
#include <iostream>
using namespace std;
using namespace System;

class Chasis {
private:
	int x, y;
public:
	Chasis(int px, int py) {
		x = px;
		y = py;
	}

	void dibujar(ConsoleColor color) {
		Console::ForegroundColor = color;
		Console::SetCursorPosition(x, y + 0); cout << char(220) << char(220) << char(220)<<char(220);
		Console::SetCursorPosition(x, y + 1); cout << char(223) << char(223) << char(223) << char(223);
	}
	void borrar() {
		Console::SetCursorPosition(x, y + 0); cout << "    ";
		Console::SetCursorPosition(x, y + 1); cout << "    ";
	}
	void mover(int dx) {
		x += dx;
	}

};