#include "CColeccion.h"
#include <conio.h>
using namespace System;
void menu()
{
	cout<<"-----MENU----- "<<endl;
	cout<<"1.Agregar"<<endl;
	cout<<"2.Insertar al inicio"<<endl;
	cout<<"3.Insertar al final"<<endl;
	cout<<"4.Insertar en una posicion"<<endl;
	cout<<"5.Eliminar al inicio"<<endl;
	cout<<"6.Eliminar al final" << endl;
	cout<<"7.Eliminar en una posicion" << endl;
	cout<<"8.Ordenar"<<endl;
	cout<<"9.Mostar"<<endl;
	cout<<"10.Salir"<<endl;
}
void main()
{
	int opc;
	int dato, pos;
	CColeccion objman;
	do
	{
		Console::Clear();
		menu();
		cout << "Ingrese opcion:> ";
		cin >> opc;
		switch (opc)
		{
		case 1:cout << "Ingrese dato:>"; cin >> dato; objman.agregar(dato); break;
		case 2:cout << "Ingrese dato:>"; cin >> dato; objman.insertar_al_inicio(dato); break;
		case 3:cout << "Ingrese dato:>"; cin >> dato; objman.insertar_al_final(dato); break;
		case 4:cout << "Ingrese dato:>"; cin >> dato;
			cout << "Ingrese posicion:>"; cin >> pos; objman.insertar_en_posicion(dato, pos); break;
		case 5: objman.eliminar_al_inicio(); break;
		case 6: objman.eliminar_al_final(); break;
		case 7:cout << "Ingrese posicion:>"; cin >> pos; objman.eliminar_en_posicion(pos); break;
		case 8:objman.ordenar(); break;
		case 9:objman.mostrar(); _getch();
		}
	} while (opc != 10);
}