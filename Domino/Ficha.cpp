#include "Ficha.h"

Ficha::Ficha(short int C1, short int C2,bool Pos):cara1(C1),cara2(C2){
	if (cara1 == cara2) {
		horizontal = Pos;
	}else{
		horizontal = !Pos;
	}
}

Ficha::~Ficha(){}

bool Ficha::getPosicion()
{
	return horizontal;
}

void Ficha::voltearCara()
{
	short int aux=cara1;
	cara1 = cara2;
	cara2 = aux;
}

short int Ficha::getCara1()
{
	return cara1;
}

short int Ficha::getCara2()
{
	return cara2;
}

std::ostream & operator<<(std::ostream &out, Ficha *F)
{
	out << F->cara1 << " | " << F->cara2 << std::endl;
	return out;
}
