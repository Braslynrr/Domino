#include "caja.h"

Caja::Caja()
{
	short int i = 0;
	Fichas = new Ficha*[28];
	for (short int m = 0; m < 7; m++)
		for (short int n = m; n < 7; n++) {
			Fichas[i] = new Ficha(m, n);
			i++;
		}
}

Caja::~Caja()
{
	for (int i = 0; i < 28; i++)
		delete Fichas[i];
	delete[] Fichas;
}

void Caja::Revolver(){
	srand(static_cast<unsigned int>(time(nullptr)));
	short int p1=0, p2=0;
	p1 = rand() % 29;
	intercambia(0, p1);
	for (short int i = 0; i < 10; i++){
		p1 = rand() % 29;
		p2 = rand() % 29;
		intercambia(p1, p2);
	}
	for (short int i = 0; i < 5; i++) {
		p1 = rand() % 10;
		p2 = rand() % 10;
		intercambia(p1, p2);
	}
	for (short int i = 0; i < 5; i++) {
		p1 = rand() % 10+10;
		p2 = rand() % 10+10;
		intercambia(p1, p2);
	}
	for (short int i = 0; i < 5; i++) {
		p1 = rand() % 8+20;
		p2 = rand() % 8+20;
		intercambia(p1, p2);
	}
}

void Caja::intercambia(short int P1, short int P2){
	if (P1==P2)
	{
		P1++;
	}
	Ficha*aux=Fichas[P1];
	Fichas[P1] = Fichas[2];
	Fichas[2] = aux;
}

std::ostream & operator<<(std::ostream &out, Caja *C)
{
	for (short int i = 0; i < 28; i++)
	out << C->Fichas[i]<<std::endl;
	return out;
}
