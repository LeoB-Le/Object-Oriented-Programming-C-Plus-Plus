#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;

Pet :: Pet()
{
    name = "";
    age = -1;
    owner = "";
    isHouseTrained = false;
}

Pet :: Pet(string name, int age, string owner, bool isHouseTrained)
{
    this -> name = name;
    this -> age = age;
    this -> owner = owner;
    this -> isHouseTrained = isHouseTrained;
}

string Pet::getName() const
{
    return name;
}

int Pet::getAge() const
{
    return age;
}

string Pet::getOwner() const
{
    return owner;
}

bool Pet::getIsHouseTrained() const
{
    return isHouseTrained;
}
void Pet::updateName(string newName)
{
    name = newName;
}

void Pet::updateAge()
{
    age++;
}

void Pet::updateOwner(string adopter)
{
    owner = adopter;
}

void Pet::setHouseTrained()
{
    isHouseTrained = true;
}


