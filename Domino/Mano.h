#ifndef MANO_H
#define MANO_H
#include "Ficha.h"
class Mano
{
public:
	Mano();
	~Mano();
	bool PedirFicha(Ficha*);
	friend std::ostream& operator<<(std::ostream&, Mano*);
	void EliminarFicha(Ficha*);
private:
	Ficha** mano;
	short int cant;
};
#endif // !MANO_H
