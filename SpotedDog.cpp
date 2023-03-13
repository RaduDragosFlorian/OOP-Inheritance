#include "SpotedDog.h"
#include"Dog.h"
using namespace std;

SpotedDog::SpotedDog() :
	Dog(),
	spotsNo(1)
{}
SpotedDog::SpotedDog(string name, double height, double weight, int age, string color, int spotsNo) :
	Dog(name, height, weight, age, color),
	spotsNo(spotsNo)
{}
SpotedDog::~SpotedDog() {
	cout << "Destructor SpotedDog" << endl;
}
void SpotedDog::print() {
	cout <<endl<<"DOG TYPE:Spoted" << endl;
	cout << "Dog name: " << name << endl;
	cout << "Dog height: " << height << endl;
	cout << "Dog weight: " << weight << endl;
	cout << "Dog age: " << age << endl;
	cout << "Dog color: " << color << endl;
	cout << "Number of spots: " << spotsNo << endl;
}
void SpotedDog::read() {
	cout << "Name: ";
	cin >> name;
	cout << "Height: ";
	cin >> height;
	cout << "Weight: ";
	cin >> weight;
	cout << "Age: ";
	cin >> age;
	cout << "Color: ";
	cin >> color;
	cout << "Number of spots: ";
	cin >> spotsNo;
}
