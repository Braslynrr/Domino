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
	if (cant<11)
	{
		mano[cant++] = F;
		return true;
	}
	return false;
}

void Mano::EliminarFicha(Ficha *F)
{
	for (short int i = 0; i<cant; i++)
		if (F == mano[i]) {
			mano[i] = nullptr;
			i=cant;
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
