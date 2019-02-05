#include "Jugador.h"

Jugador::Jugador(std::string N):nombre(N){}

Jugador::Jugador() :nombre("cpu") {}

Jugador::~Jugador(){}

Mano * Jugador::getMano()
{
	return &mano;
}

std::string Jugador::getNombre()
{
	return nombre;
}
