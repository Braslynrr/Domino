#ifndef TABLERO_H
#define TABLERO_H
#include "Ficha.h"
class Tablero
{
public:
	Tablero();
	~Tablero();
	void LimpiaTablero();
	bool colocarFicha(bool,Ficha*);
	bool VerificaJugada(bool,Ficha*);
	friend std::ostream& operator<<(std::ostream&, Tablero&);
private:
	Ficha** Tabla;
	short int cantidad;
};
#endif // !TABLERO_H

