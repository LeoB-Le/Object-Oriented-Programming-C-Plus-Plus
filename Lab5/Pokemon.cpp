#include <iostream>
#include "Pokemon.h"

Pokemon::Pokemon(){
    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default Constructor (Pokemon)" << endl;
}

Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type){
    this -> name = name;
    this -> hp = hp;
    this -> attack = att;
    this -> defense = def;
    this -> type = type;
    cout << "Overloaded Constructor (Pokemon)" << endl;
}

void Pokemon::speak(){
    cout << ".." << endl;
}

void Pokemon::printStats(){
    printf("Name: %s\t HP: %i \t DEF: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    cout << "Type: ";
    for (int i = 0; i < type.size(); i++)
    {
        cout << type[i] << "\t";
    }
    cout << endl;
}