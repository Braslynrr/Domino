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

short int Ficha::getCara1()
{
	return cara1;
}

short int Ficha::getCara2()
{
	return cara2;
}
