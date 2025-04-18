#include <iostream>
#include <stdio.h>
#include "Charmander.h"

Charmander::Charmander() : Pokemon()
{
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");
    cout << "Default Constructor (Charmander)" << endl;

}

Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s):
Pokemon(name, hp, att, def, t)
{
    type = t;
    skills = s;
    cout << "Default Constructor (Charmander)" << endl;
}

void Charmander::speak(){
    cout << "Charmander-char" << endl;
}

void Charmander::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for (int i = 0; i < skills.size(); i++)
    {
        cout << skills[i] << "\t";
    }
    cout << endl;
}