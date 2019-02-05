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
		{
			int jug=0;
			do {
				system("cls");
				cout << "Digite cuantos jugadores jugaran Max(4) \n \t 0 Cancelar\n";
				if (cin >> jug) {

				}
				else {
					system("cls");
					std::cout << "Caracter invalido" << endl;
					std::cin.clear();
					std::cin.ignore(1024, '\n');
					Sleep(2000);
				}

				if (jug == 0)
					break;
			} while (jug>5 || jug < 2);

			if (jug != 0) {
				int  djug = 4-jug;



				if (djug > 0) {
					do {
						system("cls");
						cout << "Digite cuantos IA jugaran Max(" << 4-jug << ") \n \t 0 Cancelar\n";
						if (cin >> djug) {

						}
						else {
							system("cls");
							std::cout << "Caracter invalido" << endl;
							std::cin.clear();
							std::cin.ignore(1024, '\n');
							Sleep(2000);
						}
					} while (djug>4-jug);
				}

			}
			break;
		}
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

void Domino::ordenar()
{
	

	manita.ordenar();// pd:"prueba mieo que no resulto

}
