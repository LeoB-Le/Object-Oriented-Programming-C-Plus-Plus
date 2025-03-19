#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;    
const int skill_size = 2;

class RPG
{
    public: //constructors
        RPG();
        RPG(string name, int health, int strength, int defense, string type);

        bool isAlive() const;
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;

        void setSkills();
        void printAction(string skill, RPG opponent);
        void updateHealth(int newHealth);
        void attack(RPG * opponent);
        void useSkill(RPG * opponent);


    private:
        string name;
        int health;
        int strength;
        int defense;
        string type;
        string skills[skill_size];
};
#endif