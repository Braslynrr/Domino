#ifndef FICHA_H
#define FICHA_H
#include<iostream>
class Ficha
{
public:
	Ficha(short int,short int);
	~Ficha();
	friend std::ostream& operator<<(std::ostream&, Ficha*);
private:
	short int cara1;
	short int cara2;
};
#endif // !FICHA_H
