#include "RPG.h"
#include <iostream>
#include <string>
using namespace std;

void displayStats(RPG player1A, RPG player2A)
{
    cout << player1A.getName() << " health: "<< player1A.getHealth() << '\t';
    cout << player2A.getName() << " health: "<< player2A.getHealth() << endl;
}
void gameLoop(RPG * player1B, RPG * player2B)
{
    while (((*player1B).isAlive() == 1) && ((*player2B).isAlive() == 1))
    {

        displayStats(* player1B, * player2B);
        if (player1B->getHealth() > 0)
        {
        cout << player1B->getName() << "'s turn" << endl << endl;
        //(*player1B).useSkill(player2B);
        player1B->useSkill(player2B);
        cout << ">--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<" << endl << endl;
        }

        displayStats(* player1B, * player2B);
        if (player2B->getHealth() > 0)
        {
        
        cout << player2B->getName() << "'s turn" << endl << endl;
        //(*player2B).useSkill(player1B);
        player2B->useSkill(player1B);
        cout << ">--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<" << endl << endl;
        }
    }
}
void displayEnd(RPG player1C, RPG player2C)
{
    if (player1C.isAlive() == 1)
    {
        cout << player1C.getName() << " defeated " << player2C.getName() << "! Good Game!" << endl;
    }

    else  
    {
        cout << player2C.getName() << " defeated " << player1C.getName() << "! Good Game!" << endl;
    }
}

int main()
{
    /*
    RPG Constructor = RPG();
    RPG Overloaded("Master Wu", 100, 30, 10, "mage");
    cout << Overloaded.getHealth() << endl;
    cout << Constructor.getHealth() << endl;
    Overloaded.updateHealth(40);
    Constructor.updateHealth(100);
    cout << Overloaded.getHealth() << endl;
    cout << Constructor.getHealth() << endl;
    cout << Overloaded.isAlive() << endl;
    cout << Constructor.isAlive() << endl;
    Overloaded.attack(& Constructor);
    cout << Constructor.getHealth() << endl;
    cout << Constructor.isAlive() << endl;
    Overloaded.setSkills();
    Overloaded.useSkill(& Constructor);
    cout << Constructor.getHealth() << endl; 
    */
   cout << ">--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<>--<" << endl << endl;

    RPG p1 = RPG("Master Wu", 70, 45, 15, "mage");
    RPG p2 = RPG();
    p1.setSkills(); //why dont work

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

    return 0;
}