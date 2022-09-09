#pragma once
#include "iostream"
using namespace System;
using namespace std;
class CCasa
{
private:
	int x, y;
	int ancho, alto;
public:
	CCasa(int _x, int _y);
	void Mostrar();
};
CCasa::CCasa(int _x, int _y)
{
	x = _x; y = _y;
	ancho = 34; alto = 11;
}
void CCasa::Mostrar()
{
  Console::SetCursorPosition(x, y);   cout << "              ) (                " << endl;
  Console::SetCursorPosition(x, y+1); cout << "      ________[_]________        " << endl;
  Console::SetCursorPosition(x, y+2); cout << "     / \\        ______   \\      " << endl;
  Console::SetCursorPosition(x, y+3); cout << "    //_\\       \\    /\\    \\   " << endl;
  Console::SetCursorPosition(x, y+4); cout << "   //___\\       \\__/  \\    \\  " << endl;
  Console::SetCursorPosition(x, y+5); cout << "  //_____\\       \\ |[]|     \\   " << endl;
  Console::SetCursorPosition(x, y+6); cout << " //_______\\       \\|__|      \\ " << endl;
  Console::SetCursorPosition(x, y+7); cout << "/XXXXXXXXXX\\__________________\\ " << endl;
  Console::SetCursorPosition(x, y+8); cout << " I_I|  |I__I_____[]_|_[]_____I   " << endl;
  Console::SetCursorPosition(x, y+9); cout << " I_I|  |I__I_____[]_|_[]_____I   " << endl;
  Console::SetCursorPosition(x, y+10);cout << "~~~~~"  "~~~~~~~~~~~~~~~~~~~~~~" << endl;

}						