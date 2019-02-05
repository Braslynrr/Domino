#ifndef DOMINO_H
#define DOMINO_H
#include "Tablero.h"
#include"caja.h"
#include "Mano.h"
#include <Windows.h>
using std::cout;
using std::endl;
using std::cin;
class Domino{
public:
	Domino();
	~Domino();
	void jugar();
	void ordenar();
private:
	Caja Fichas;
	Tablero Tabla;
	Mano manita;
};
#endif // !DOMINO_H
