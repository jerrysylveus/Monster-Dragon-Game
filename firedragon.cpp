// Jerry Sylveus
// sylveusj@oregonstate.edu

#include "firedragon.hpp"
#include <cstdlib>
using namespace std;

// default constructor intializing the attack and strength to zero
// // and intializing type of attack to an empty string
FireDragon::FireDragon(int a, int st, string t)
{
   this->setAttack(a);
   this->setStrength(st);
   this->setTypeAttack(t);
}


int FireDragon::Attack()   //total damage of every attack added together
{
   int damage = 0;
    
   for(int i=0;i<this->getAttack();i++)     //this->getAttack might have multiple hits
    {
        int thisAttack = rand() % this->getStrength() + 1; //attack is betwen 1 and strength
        if(rand()%2 == 1){     //chance to crit is 50 percent
		std::cout << "Fire Dragon gets to attack ALL OVER AGAIN!" << std::endl;
            	i = 0;             //effect of crit is to have an additional attack as all dragons have
       }
        damage += thisAttack;    //add the damage of this attack to the total damage
        std::cout << "Fire Dragon attacks for " << thisAttack << " damage" << std::endl;
        
   }
   return damage;    //return total damage
    
}












































