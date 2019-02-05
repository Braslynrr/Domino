#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include "Mano.h"
class Jugador
{
public:
	Jugador(std::string);
	Jugador();
	~Jugador();
	Mano* getMano();
	std::string getNombre();
private:
	std::string nombre;
	Mano mano;
};

#endif // !JUGADOR_H
