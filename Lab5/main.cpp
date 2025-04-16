#include <iostream>
#include "Charmander.h"
using namespace std;
int main()
{
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "-=-=-=-Constructor Created-=-=-=-" << endl;
    Charmander charlie = Charmander("Charlie", 100, 4, 4,pokemonType, skills);
    
    cout << endl << "-=-=-=-Direct Speak-=-=-=-" << endl;
    charlie.speak();

    Pokemon * p1 = &charlie;
    cout << endl << "-=-=-=-Speak called from Pokemon Pointer-=-=-=-" << endl;
    (*p1).speak();

    Charmander * c1 = &charlie;
    cout << endl << "-=-=-=-Speak called from Charmander Pointer-=-=-=-" << endl;
    (*c1).speak();

    cout << endl << "-=-=-=-Print Stats-=-=-=-" << endl;
    charlie.printStats();
}