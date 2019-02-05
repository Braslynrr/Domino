#ifndef DOMINO_H
#define DOMINO_H
#include "Tablero.h"
#include"caja.h"
#include "Lista.h"
#include <Windows.h>
using std::cout;
using std::endl;
using std::cin;
class Domino{
public:
	Domino();
	~Domino();
	void jugar();
	void menuJugadores(short int);
private:
	Caja Fichas;
	Tablero Tabla;
	Lista ListaJ;
	bool preparativo;
	short int turno;
};
#endif // !DOMINO_H
