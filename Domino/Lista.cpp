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

void Lista::eliminarLista()
{
	if (inicio != nullptr) {
		struct Nodo* aux;
		while (inicio != nullptr) {
			aux = inicio;
			inicio = inicio->next;
			delete aux;
			aux = nullptr;
		}
	}
}

Nodo * Lista::getInicio()
{
	return inicio;
}
