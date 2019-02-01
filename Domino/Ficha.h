#ifndef FICHA_H
#define FICHA_H
#include<iostream>
class Ficha
{
public:
	Ficha(short int,short int,bool=true);
	~Ficha();
	void setPosicion();
	bool getPosicion();
	short int getCara1();
	short int getCara2();
private:
	short int cara1;
	short int cara2;
	bool horizontal;
};
#endif // !FICHA_H
