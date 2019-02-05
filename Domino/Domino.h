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
private:
	Caja Fichas;
	Tablero Tabla;
	Lista ListaJ;
};
#endif // !DOMINO_H
