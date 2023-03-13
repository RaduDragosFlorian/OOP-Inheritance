#pragma once
#include "Dog.h"
class SpotedDog :virtual public Dog
{
public:
	SpotedDog();
	SpotedDog(string name, double height, double weight, int age, string color, int spotsNo) ;
	~SpotedDog();
	void print();
	void read();
protected:
	int spotsNo;
};


