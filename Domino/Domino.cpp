#include "Domino.h"

Domino::Domino(){}

Domino::~Domino(){}

void Domino::jugar()
{
	bool salir=false;
	char menu;
	while(!salir){
		system("cls");
		cout << "\t Menu de Domino \n\n";
		cout << "(N)ueva partida (C)argar Partida (S)alir" << endl;
		cin >> menu;
		switch (menu)
		{
		case 'N':
		case'n':


			break;
		case 'C':
		case 'c':


			break;
		case 'S':
		case 's':
			salir = true;
			break;
		default:
			cout << "Opcion invalida \n";
			Sleep(2000);
			break;
		}
	}
}
