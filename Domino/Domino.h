#ifndef DOMINO_H
#define DOMINO_H
#include "Tablero.h"
#include"caja.h"
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
};
#endif // !DOMINO_H
