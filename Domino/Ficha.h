#ifndef FICHA_H
#define FICHA_H
#include <iostream>
class Ficha
{
public:
	Ficha(short int,short int,bool=true);
	~Ficha();
	bool getPosicion();
	void voltearCara();
	short int getCara1();
	short int getCara2();
	friend std::ostream& operator<<(std::ostream&, Ficha*);
private:
	short int cara1;
	short int cara2;
	bool horizontal;
};
#endif // !FICHA_H
