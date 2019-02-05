#include "Tablero.h"

Tablero::Tablero():cantidad(0)
{
	Tabla = new Ficha*[28];
	for (short int i = 0; i < 28; i++)
		Tabla[i] = nullptr;
}

Tablero::~Tablero() {
	for (short int i = 0; i < 28; i++)
		Tabla[i]=nullptr;
	delete Tabla;
}

void Tablero::LimpiaTablero()
{
	for (short int i = 0; i < cantidad; i++){
		Tabla[i] = nullptr;
	}
	cantidad = 0;
}

bool Tablero::colocarFicha(bool Arriba,Ficha *F)//semi funciona porque habria que invertir ficha
{
	if(cantidad<28)
	if (Arriba){
		Ficha* aux = Tabla[0];
		Ficha* aux2;
		Tabla[0] = F;
		for (short int i = 0; Tabla[i] != nullptr; i++) {
			aux2 = Tabla[i+1];
			Tabla[i+1] = aux;
			aux = aux2;
			aux2 = nullptr;
		}
		cantidad++;
		return true;
	}else {
		Tabla[cantidad] = F;
		cantidad++;
		return true;
	}
	return false;
}

bool Tablero::VerificaJugada(bool pos, Ficha *Ficha1)
{
	if (Tabla[0] == nullptr) {
		return colocarFicha(pos, Ficha1);
	}
	else
	{
		if (pos)
		{
			if (Ficha1->getCara1() == Tabla[0]->getCara1() || Ficha1->getCara2() == Tabla[0]->getCara1()) {
				if (Ficha1->getCara1() == Tabla[0]->getCara1())
					Ficha1->voltearCara();
				return colocarFicha(pos, Ficha1);
			}

		}
		else {

			if (Ficha1->getCara1() == Tabla[cantidad-1]->getCara2() || Ficha1->getCara2() == Tabla[cantidad-1]->getCara2()) {
				if (Ficha1->getCara2() == Tabla[cantidad-1]->getCara2())
					Ficha1->voltearCara();
				return colocarFicha(pos, Ficha1);
			}

		}
	}

	return false;
}


std::ostream& operator<<(std::ostream &out, Tablero &T){

	short int c1 = 0, c2 = 0;
	for (short int i = 0; T.Tabla[i] != nullptr && i < 28; i++) {
		c1 = T.Tabla[i]->getCara1();
		c2 = T.Tabla[i]->getCara2();
		if (T.Tabla[i]->getPosicion() == true)
		{
			out << " -------" << std::endl;
			out << "| " << c1 << " | " << c2 << " |" << std::endl;
			out << " -------" << std::endl;
		}
		else {
			out << "  ___" << std::endl;
			out << " | " << c1 << " |" << std::endl;
			out << " |___|" << std::endl;
			out << " | " << c2 << " |" << std::endl;
			out << " |___|" << std::endl;
		}
	}
	return out;
}
