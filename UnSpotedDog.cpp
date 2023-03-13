#include "UnSpotedDog.h"
#include"Dog.h"
using namespace std;

UnSpotedDog::UnSpotedDog() :
	Dog()
{}
UnSpotedDog::UnSpotedDog(string name, double height, double weight, int age, string color) :
	Dog(name, height, weight, age, color)
{}
UnSpotedDog::~UnSpotedDog() {
	cout << "Destructor UnSpotedDog" << endl;
}
void UnSpotedDog::print() {
	cout << endl << "DOG TYPE:UnSpoted" << endl;
	cout << "Dog name: " << name << endl;
	cout << "Dog height: " << height << endl;
	cout << "Dog weight: " << weight << endl;
	cout << "Dog age: " << age << endl;
	cout << "Dog color: " << color << endl;
}
void UnSpotedDog::read() {
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
}