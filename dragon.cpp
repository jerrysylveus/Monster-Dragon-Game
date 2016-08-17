// Jerry SYlveus
// sylveusj@oregonstate.edu


#include "dragon.hpp"
#include <cstdlib>

// default constructor intializing the attack and strength to zero
// // and intializing type of attack to an empty string
Dragon::Dragon()
{
   attack = 4;
   strength = 100;
   typeOfAttack = " ";
}

// constructor with parameters
Dragon::Dragon(int a, int st, string t)
{
   this->setAttack(a);
   this->setStrength(st);
   this->setTypeAttack(t);
}


int Dragon::Attack() //total damage of every attack added together
{
   int damage = 0;
    
   for(int i=0;i<this->getAttack();i++) //this->getAttack might have multiple hits
   {
        int thisAttack = rand() % this->getStrength() + 1;  //attack is betwen 1 and strength
        if(rand()%10 >= 5)        //chance to critically hit is 20 percent for the dragon
            this->setAttack(this->getAttack() + 1);   //effect can cause 100 points damage
        damage += thisAttack;   //add the damage of this attack to the total damage
        std::cout << "Dragon attacks for " << thisAttack << " damage" << std::endl;
        
   }
    return damage;   //return total damage
}








































