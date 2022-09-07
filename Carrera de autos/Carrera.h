#pragma once
#include "Carro.h"
class Carrera
{
private:
	int meta;
	int cant;
	vector<Carro*>arrCarro;
public:
	Carrera(int participantes, int _meta)
	{
		meta = _meta;
		cant = 5;
		for (int i = 0; i < participantes; i++)
			AgregarCarro(i);
	}
	~Carrera()
	{
		arrCarro.erase(arrCarro.begin(), arrCarro.end());
	}
	void AgregarCarro(int lugar)
	{
		
		arrCarro.push_back(new Carro(0, lugar * 5));
		//arrCarro.insert(arrCarro.begin(),new Carro(0, lugar * 5));
	}
	void Correr()
	{
		for (int i = 0; i < cant * 5; i++)
		{
			Console::ForegroundColor = ConsoleColor::White;
			Console::SetCursorPosition(meta, i);
			cout << (char)177;
		}
		

		
		for (int i = 0; i < cant; i++)
		{
			arrCarro[i]->Borrar();
			arrCarro[i]->Mover();
			arrCarro[i]->dibujar();
			
		}

	}
	bool HayGanador()
	{
		for (int i = 0; i < cant; i++)
		{
			if (arrCarro[i]->GetX() + 3 >= meta)
				return true;
		}
		return false;
	}
};

