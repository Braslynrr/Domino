#ifndef NODO_H
#define NODO_H
#include"Jugador.h"
struct Nodo{
	Jugador* Player;
	struct Nodo* next;
};
#endif // !NODO_H
