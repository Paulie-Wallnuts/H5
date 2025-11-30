#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
using namespace std;

int main()
{
cout << "=== OSA 1: OSOITIN ===" << endl;

int a = 10;
cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

int* pointerA = &a;
cout << "Pointerin osoittama osoite on: " << pointerA << endl;
cout << "Pointerin osoittaman muistipaikan arvo on: " << *pointerA << endl;

*pointerA = 30;
cout << "a:n uusi arvo on: " << a << endl << endl;


cout << "=== OSA 2: REFERENSSI ===" << endl;

int x = 5;
int& refA = x;

cout << "refA:n osoittama osoite on: " << &refA << endl;
cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

refA = 6;
cout << "x:n arvo refA:n muutoksen jälkeen: " << x << endl << endl;


cout << "=== OSA 3: CLASSA1 (kopio) ===" << endl;

ClassB objB;
objB.setInfo("Olio B asetettu info");

ClassA1 objA1(objB);
objA1.setBinfo("Olio A1 asettama info");

cout << "objB:  " << objB.getInfo() << endl;
cout << "objA1: " << objA1.getBinfo() << endl << endl;


cout << "=== OSA 4: CLASSA2 (referenssi) ===" << endl;

ClassB objB2;
objB2.setInfo("Alkuperäinen info");

ClassA2 objA2(objB2);
objA2.setBinfo("Olio A2 asettama info");

cout << "objB2: " << objB2.getInfo() << endl;
cout << "objA2: " << objA2.getBinfo() << endl;

return 0;
}
