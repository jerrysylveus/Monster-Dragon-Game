






// Jerry Sylveus
// sylveusj@orgonstate.edu

#include "icedragon.hpp"
#include "dragon.hpp"
#include <cstdlib>

// default constructor intializing the attack and strength to zero
// // and intializing type of attack to an empty string
IceDragon::IceDragon(int a, int st, string t)
{
   this->setAttack(a);
   this->setStrength(st);
   this->setTypeAttack(t);
}

int IceDragon::Attack()   //total damage of every attack added together
{
   int damage = 0;
   for(int i=0;i<this->getAttack();i++)     //this->getAttack might have multiple hits
   {
        int thisAttack = rand() % this->getStrength() + 1; //attack is betwen 1 and strength
        if(rand()%2 == 1) {      //chance to critically hit is  is 50 percent
            thisAttack *= 2;    //effect of crit is double
    	}
        damage += thisAttack;    //add the damage of this attack to the total damage
        
        std::cout << "Ice Dragon attacks for " << thisAttack << " damage" << std::endl;
        
   }
    
   if(rand()%2 == 1)  // the chance to hit is 50 percent
   {
        std::cout << "Ice Dragon DOUBLES damage!" << std::endl;
        damage *= 2;  //doubling the damage
   }
   return damage;   //return total damage
}















































