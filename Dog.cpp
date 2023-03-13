#include "Dog.h"
Dog::Dog() :name(""), height(), weight(), age(), color("")
{}

Dog::Dog(string name, double height, double weight, int age, string color) :
	name(name), 
	height(height), 
	weight(weight), 
	age(age), 
	color(color)
{}
Dog::~Dog() {
	cout << "Destructor dog" << endl;
}
void Dog::print() {
	cout <<endl<<"DOG TYPE:Spoted/Unspoted" << endl;
	cout << "Dog name: " << name<<endl;
	cout << "Dog height: " << height << endl;
	cout << "Dog weight: " << weight << endl;
	cout << "Dog age: " << age << endl;
	cout << "Dog color: " << color << endl;
}
void Dog::read() {
	cout << "Name: ";
	cin >> name;
	cout <<"Height: ";
	cin >> height;
	cout <<"Weight: ";
	cin >> weight;
	cout << "Age: ";
	cin >> age;
	cout <<"Color: ";
	cin >> color;
}
