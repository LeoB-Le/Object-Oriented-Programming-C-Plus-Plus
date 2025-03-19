#include "RPG.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    RPG Constructor = RPG();
    RPG Overloaded("Master Wu", 100, 1000, 10, "mage");
    cout << Overloaded.getHealth() << endl;
    cout << Constructor.getHealth() << endl;
    //verloaded.updateHealth(40);
    //Constructor.updateHealth(100);
    cout << Overloaded.getHealth() << endl;
    cout << Constructor.getHealth() << endl;
    //cout << Overloaded.isAlive() << endl;
    //cout << Constructor.isAlive() << endl;
    Overloaded.attack(& Constructor);
    cout << Constructor.getHealth() << endl;
    cout << Constructor.isAlive() << endl;
    Overloaded.setSkills();
    Overloaded.useSkill(& Constructor);
    
    
    
    
    
    
    
    
    
    
    /*cout << Overloaded.getName() << "'s Health: " << Overloaded.getHealth() << "\t\t" << Constructor.getName() <<" Health: " << Constructor.getHealth() << endl;
    cout << Overloaded.getName() << "'s Turn\n\n";
    Overloaded.setSkills(); 
    
    *************************for next lab*/ 

}