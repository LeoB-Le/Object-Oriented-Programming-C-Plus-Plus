#include "RPG.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    RPG Constructor = RPG();
    RPG Overloaded("Master Wu", 100, 10, 10, "mage");
    cout << Overloaded.getHealth() << endl;
    cout << Constructor.getHealth() << endl;
    Overloaded.updateHealth(40);
    Constructor.updateHealth(-10000);
    cout << Overloaded.getHealth() << endl;
    cout << Constructor.getHealth() << endl;
    cout << Overloaded.isAlive() << endl;
    cout << Constructor.isAlive() << endl;

    /*cout << Overloaded.getName() << "'s Health: " << Overloaded.getHealth() << "\t\t" << Constructor.getName() <<" Health: " << Constructor.getHealth() << endl;
    cout << Overloaded.getName() << "'s Turn\n\n";
    Overloaded.setSkills(); 
    
    *************************for next lab*/ 

}