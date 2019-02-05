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
	if (cant<11)
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

void Mano::ordenar()
{
	Ficha* aux;
	for (short int i = 0; i < cant; i++){
		if (mano[i + 1] != nullptr && mano[i+1]->getCara1()<mano[i]->getCara1()) {
			aux = mano[i+1];
			mano[i + 1] = mano[i];
			mano[i] = aux;
			aux = nullptr;
		}
	}
}

std::ostream & operator<<(std::ostream &out, Mano *M)
{
	for (short int i = 0; i < M->cant; i++)
		out<<" ___\t";
	for (short int i = 0; i < M->cant; i++)
		out << "| " << M->mano[i]->getCara1()<< " |\t";
	for (short int i = 0; i < M->cant; i++)
		out << " |___|\t";
	for (short int i = 0; i < M->cant; i++)
		out << " | " << M->mano[i]->getCara2()<< " |\t";
	for (short int i = 0; i < M->cant; i++)
		out << " |___|\t";
	return out;
}
