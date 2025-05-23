#include "RPG.h"
#include <string>
#include <iostream>
using namespace std;

RPG::RPG()
{
    name = "NPC";
    health = 100;
    strength = 30;
    defense = 50;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}

RPG::RPG(string name, int health, int strength, int defense, string type)
{
    this -> name = name;
    this -> health = health;
    this -> strength = strength;
    this -> defense = defense;
    this -> type = type;
}

string RPG::getName() const
{
    return name;
}

int RPG::getHealth() const
{
    return health;
}

int RPG::getStrength() const
{
    return strength;
}

int RPG::getDefense() const
{
    return defense;
}

void RPG::setSkills()
{
    if (type == "mage")
        {
            skills[0] = "fire";
            skills[1] = "thunder";
        }

    else if (type == "thief")
        {
            skills[0] = "pilfer";
            skills[1] = "jab";
        }

     else if (type == "archer")
        {
            skills[0] = "parry";
            skills[1] = "crossbow attack";
        }

    else 
        {
            skills[0] = "slash";
            skills[1] = "parry";
        }
}

void RPG::printAction(string skill, RPG opponent)
{
   // printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
    cout << name << " used " << skill << " on " << opponent.getName() << endl << endl;

}

void RPG::updateHealth(int newHealth)
{
    health = newHealth;
}

bool RPG::isAlive() const
{ 
   if (health > 0)
    {
        return true;
    }

    else return false;
}

void RPG::attack(RPG * opponent)
{
    //int new_health = 100; //opponent->getHealth() why this work too
    int a = max(strength, opponent->getDefense());
    int b = min(strength, opponent->getDefense());
        if (strength > opponent->getDefense() > 0)
        {
            int new_health = (*opponent).getHealth() - (a - b);
            (*opponent).updateHealth(new_health);
        } 
    
}

void RPG::useSkill(RPG * opponent)
{
    for (int i = 0; i < skill_size; i++)
    {
        //printf("Skill %i: %s\n", i, skills[i].c_str());
        cout << "Skill " << i << ": " << skills[i] << endl;
    }

    int chosen_skill_index = -1;
    string chosen_skill = "";

    //printf("Choose a skill to use: 0 or 1\n");
    cout << "Choose a skill to use: Enter 0 or 1\n";

    cin >> chosen_skill_index;
    chosen_skill = skills[chosen_skill_index];

    printAction(chosen_skill, * opponent);
    attack(opponent);
}
