#include "caja.h"
#include "Tablero.h"
int main() {
	Caja C;
	Tablero T;
	T.VerificaJugada(true, C.darFicha());
	T.VerificaJugada(false, C.darFicha());
	T.VerificaJugada(true, C.darFicha());
	std::cout << T;
	return 0;
}