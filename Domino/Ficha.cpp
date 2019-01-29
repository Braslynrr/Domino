#include "Ficha.h"

Ficha::Ficha(short int C1, short int C2):cara1(C1),cara2(C2){}

Ficha::~Ficha(){}

std::ostream & operator<<(std::ostream &out , Ficha * F)
{
	out << F->cara1 << " | " << F->cara2<<std::endl;
	return out;
}
