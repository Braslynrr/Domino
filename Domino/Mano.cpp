#include "Mano.h"

Mano::Mano()
{
	mano = new Ficha*[10];
	for (short int i = 0; i < 10; i++)
		mano[i] = nullptr;
	cant = 0;
}

Mano::~Mano()
{
	for (short int i = 0; i < 10; i++)
		mano[i] = nullptr;
	delete[] mano;
}

bool Mano::PedirFicha(Ficha* F)
{
	if(F!=nullptr)
	if (cant<9)// cambiado de '11' a '9' para evitar el overflow
	{
		mano[cant++] = F;
		return true;
	}
	return false;
}

Ficha* Mano::DarFicha(short int NF)
{
	cant--;
	return mano[NF];
}

short int Mano::getCantidad()
{
	return cant;
}

void Mano::ordenar()//metodo de ordenamiento mieo ya que hay otros mas eficaces
{
	short int cantf = cant;
	while (cantf < 0) {

		Ficha* aux;
		for (short int i = 0; i < cant - 1; i++) {// "-1" para evitar el desbordamiento del vector
			if (mano[i + 1] != nullptr && mano[i + 1]->getCara1() < mano[i]->getCara1()) {
				aux = mano[i + 1];
				mano[i + 1] = mano[i];
				mano[i] = aux;
				aux = nullptr;
			}
		}
	cantf--;
	}
	
}

std::ostream & operator<<(std::ostream &out, Mano *M)
{
	for (short int i = 0; i < M->cant; i++)
		out<<"  ___\t";
	out << std::endl;
	for (short int i = 0; i < M->cant; i++)
		out << " | " << M->mano[i]->getCara1()<< " |\t";
	out << std::endl;
	for (short int i = 0; i < M->cant; i++)
		out << " |___|\t";
	out << std::endl;
	for (short int i = 0; i < M->cant; i++)
		out << " | " << M->mano[i]->getCara2()<< " |\t";
	out << std::endl;
	for (short int i = 0; i < M->cant; i++)
		out << " |___|\t";
	out << std::endl;
	return out;
}
