#ifndef LISTA_H
#define LISTA_H
#include "Nodor.h"
class Lista{
public:
	Lista();
	~Lista();
	void añadirJugador(Jugador*);
	Nodo* getInicio();
private:
	struct Nodo* inicio;
};
#endif // !LISTA_H
