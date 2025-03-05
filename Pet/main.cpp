#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;



int main()
{
   Pet ConstructorPet = Pet();
   Pet OverloadedPet("Dooley", 17, "Davenport", false);

   cout << "Constructor name is " << ConstructorPet.getName() << "\n";
   cout << "Constructor age is " << ConstructorPet.getAge() << "\n";
   cout << "Constructor owner is " << ConstructorPet.getOwner() << "\n";
   cout << "Constructor house trained status is " << ConstructorPet.getIsHouseTrained() << "\n\n";

   cout << "Overloarded name is " << OverloadedPet.getName() << endl;
   cout << "Overloarded age is " << OverloadedPet.getAge() << endl;
   cout << "Overloarded owner is " << OverloadedPet.getOwner() << endl;
   cout << "Overloarded house trained status is " << OverloadedPet.getIsHouseTrained() << endl << endl;

ConstructorPet.updateName(OverloadedPet.getName());
ConstructorPet.updateAge();
ConstructorPet.updateOwner(OverloadedPet.getOwner());
ConstructorPet.setHouseTrained();

cout << "Constructor Pet Changed \n";
cout << "Constructor pet's update name is " << ConstructorPet.getName() << endl;
cout << "Constructor pet's update age is " << ConstructorPet.getAge() << endl;
cout << "Constructor pet's update owner is " << ConstructorPet.getOwner() << endl;
cout << "Constructor pet house trained status is now " << ConstructorPet.getIsHouseTrained() << endl;

return 0; }
