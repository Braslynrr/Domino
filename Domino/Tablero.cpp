#include "Tablero.h"

Tablero::Tablero():cantidad(0)
{
	Tabla = new Ficha*[28];
}

Tablero::~Tablero() {
	for (short int i = 0; i < 28; i++)
		Tabla[i]=nullptr;
	delete Tabla;
}

bool Tablero::colocarFicha(bool Arriba,Ficha *F)//semi funciona porque habria que invertir ficha
{
	if(cantidad<28)
	if (Arriba){
		Ficha* aux = Tabla[0];
		Tabla[0] = F;
		for (short int i = 1; Tabla[0] != nullptr; i++) {

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

std::ostream & operator<<(std::ostream &out, Tablero * T)
{
	for (size_t i = 0; T->Tabla[i] != nullptr && i < 28; i++)
		if (T->Tabla[i]->getPosicion()==true)
		{
			std::cout << "--------"<<std::endl;
			std::cout << "|   |   |" << std::endl;
			std::cout << "| "<<T->Tabla[i]->getCara1()<<" | " <<T->Tabla[i]->getCara2()<<" |" << std::endl;
			std::cout << "|   |   |" << std::endl;
			std::cout << "--------" << std::endl;
		}else{
			std::cout << "-----" << std::endl;
			std::cout << "| "<<T->Tabla[i]->getCara1()<<" |"<< std::endl;
			std::cout << "|____|" << std::endl;
			std::cout << "| " << T->Tabla[i]->getCara2() << " |" << std::endl;
			std::cout << "|____|" << std::endl;
		}
	return out;
}
