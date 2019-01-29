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
	friend std::ostream& operator<<(std::ostream&, Caja*);
	void Revolver();
	void intercambia(short int,short int);

private:
	Ficha** Fichas;
};
#endif // !CAJA_H

