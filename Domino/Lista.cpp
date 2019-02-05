#include "Lista.h"

Lista::Lista()
{
	inicio = nullptr;
}

Lista::~Lista()
{
}

void Lista::añadirJugador(Jugador* J){
	struct Nodo* nuevo;
	nuevo = new Nodo;
	nuevo->Player = J;
	nuevo->next = nullptr;
	if (inicio==nullptr){
		inicio = nuevo;
		nuevo = nullptr;
	}
	else {
		struct Nodo* aux=inicio;
		while (aux->next!=nullptr)
			aux = aux->next;
		aux->next = nuevo;
	}
}

Nodo * Lista::getInicio()
{
	return inicio;
}
