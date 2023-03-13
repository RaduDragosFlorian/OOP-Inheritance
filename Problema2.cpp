#include <iostream>
#include"Dog.h"
#include"SpotedDog.h"
#include"UnSpotedDog.h"
using namespace std;


int main()
{
    cout << "Introduceti numarul de jucatori" << endl;
    int n;
    cin >> n;
    Dog* Dogs[n];
    /*Dogs[0] = new Dog;*/
    Dogs[0] = new SpotedDog;
    Dogs[1] = new UnSpotedDog;
    for (int i = 0; i < 2; i++) {
        Dogs[i]->read();
    }
    for (int i = 0; i < 2; i++) {
        Dogs[i]->print();
    }
}
