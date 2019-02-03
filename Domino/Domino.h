#ifndef DOMINO_H
#define DOMINO_H
#include "Tablero.h"
#include"caja.h"
using std::cout;
using std::endl;
using std::cin;
class Domino{
public:
	Domino();
	~Domino();
	void jugar();
	bool Verficajugada(bool,Ficha*);
private:
	Caja Fichas;
	Tablero Tabla;
};
#endif // !DOMINO_H
