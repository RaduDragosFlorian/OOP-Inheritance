#pragma once
#include "Dog.h"
class UnSpotedDog :virtual public Dog
{
public:
	UnSpotedDog();
	UnSpotedDog(string name, double height, double weight, int age, string color);
	~UnSpotedDog();
	void print();
	void read();
};


