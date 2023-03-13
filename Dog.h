#pragma once
#include<iostream>
#include<string>
using namespace std;
class Dog
{
public:
	Dog();
	Dog(string name,double height, double weight, int age, string color);
	~Dog();
	virtual void print()=0;
	virtual void read()=0;
protected:
	string name;
	double height;
	double weight;
	int age;
	string color;
};

