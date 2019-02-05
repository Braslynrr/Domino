#include "Domino.h"

Domino::Domino():preparativo(true),turno(0){}

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
			Fichas.Revolver();
			Jugador* nuevojugador;
			int jug=1;
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
					Sleep(1000);
					jug = 1;
				}

				if (jug == 0)
					break;
			} while (jug>5 || jug < 2);
			std::string Nombre;
			for (short int i = 0; i < jug; i++) {
				system("cls");
				cout << "Digite nombre del jugador #" << i + 1<<"\n";
				cin >> Nombre;
				nuevojugador = new Jugador(Nombre);
				ListaJ.añadirJugador(nuevojugador);
				nuevojugador = nullptr;
			}

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

					for (short int i = 0; i < djug; i++){
						nuevojugador = new Jugador;
						ListaJ.añadirJugador(nuevojugador);
						nuevojugador = nullptr;
					}
				}
				//empieza el juego
				menuJugadores(jug + djug);
				ListaJ.eliminarLista();
				Fichas.reiniciar();
				Tabla.LimpiaTablero();
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

void Domino::menuJugadores(short int Tjugs){
	bool final=false;
	bool turnoF=false;
	bool accion = false;
	Ficha* Fichaux=nullptr;
	short int indice = 0;
	struct Nodo* aux = ListaJ.getInicio();
	if (preparativo){
		for (short int i = 0; i < Tjugs; i++) {
			for (short int j = 0; j < 7; j++)
				aux->Player->getMano()->PedirFicha(Fichas.darFicha());
			aux = aux->next;
		}
	}
	aux = ListaJ.getInicio();
	char opcion;
	do {
		if (aux->Player->getNombre() == "cpu") {

		}
		else {
			do {
				turnoF = false;
				system("cls");
				cout << "jugador: " << aux->Player->getNombre() << endl << endl;
				cout << aux->Player->getMano() << endl;
				cout << "(C)olocar Ficha";
				if (Fichas.getCantidad() == 28) {
					cout << " (P)asar";
				}
				else {
					cout << " (T)omar Ficha";
				}
				cout << " (G)uardar Partida (S)alir \n";
				cin >> opcion;
				switch (opcion) {
				case 'C':
				case 'c':
					accion = false;
					while (accion != true)
					{
						system("cls");
						cout << "Tabla:\n";
						cout << Tabla;
						cout << "Digite (1) para colocar su ficha arriba (2)Abajo para colocar abajo (3)Mostrar fichas\n";
						cin >> opcion;
						switch (opcion) {
						case '1':
							do {
								system("cls");
								cout << aux->Player->getMano() << endl;
								cout << "Cual Ficha desea colocar?\n";
								cin >> indice;
							} while (aux->Player->getMano()->getCantidad()<indice && indice>0);
							Fichaux = aux->Player->getMano()->DarFicha(indice-1);
							if (Tabla.VerificaJugada(true,Fichaux)){
								Fichaux = nullptr;
								accion = true;
								turnoF = true;
							}else {
								aux->Player->getMano()->PedirFicha(Fichaux);
								Fichaux = nullptr;
							}
							break;
						case'2':
							do {
								system("cls");
								cout << aux->Player->getMano() << endl;
								cout << "Cual Ficha desea colocar?\n";
								cin >> indice;
							} while (aux->Player->getMano()->getCantidad() < indice && indice > 0);
							Fichaux = aux->Player->getMano()->DarFicha(indice);
							if (Tabla.VerificaJugada(false, Fichaux)) {
								Fichaux = nullptr;
								turnoF = true;
							}
							else {
								aux->Player->getMano()->PedirFicha(Fichaux);
								Fichaux = nullptr;
								turnoF = false;
								cout << "La ficha no es jugable en esa posicion\n";
								system("pause");
							}
							accion = true;
							break;
						case '3':
							cout << aux->Player->getMano()<< endl;
							system("pause");
							break;
						default:
							cout << "opcion invalida \n";
							Sleep(1500);
							break;
						}
					}
					break;
				case 'P':
				case 'p':
					if (Fichas.getCantidad() == 28) {

						turnoF = true;
					}
					break;
				case 'T':
				case 't':
					if (Fichas.getCantidad() < 28) {
						aux->Player->getMano()->PedirFicha(Fichas.darFicha());
					}
					break;
				case 'G':
				case 'g':

					break;
				case 'S':
				case 's':
					turnoF = true;
					final = true;
					break;
				default:
					cout << "Opcion invalida" << endl;
					Sleep(1500);
					break;
				}
			} while (turnoF != true);
		}
		turno++;
		aux = aux->next;
		if (turno == Tjugs) {
			turno = 0;
			aux = ListaJ.getInicio();
		}
	} while (final!=true);
}
