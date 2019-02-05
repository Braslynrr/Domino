#ifndef CAJA_H
#define CAJA_H
#include "Ficha.h"
#include <stdlib.h>
#include <time.h>
class Caja
{
public:
	Caja();
	~Caja();
	void Revolver();
	void intercambia(short int,short int);
	friend std::ostream& operator<<(std::ostream&, Caja&);
	Ficha* darFicha();
private:
	Ficha** Fichas;
	short int Fcantidad;
};
#endif // !CAJA_H

