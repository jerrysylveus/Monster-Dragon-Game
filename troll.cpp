// Jerry Sylveus
// sylveusj@oregonstate.edu

#include "troll.hpp"
#include <cstdlib>
#include <cstdlib>

// constructor with parameter
Troll::Troll(int a, int st, string t)
{
   this->setAttack(a);
   this->setStrength(st);
   this->setTypeAttack(t);
}



int Troll::Attack()     //total damage of every attack added together
{
   int damage = 0;
   for(int i=0;i<this->getAttack();i++)     //this->getAttack might have multiple hits
   {
	int thisAttack = rand() % this->getStrength() + 1;     //attack is betwen 1 and strength
        if(rand()%2 == 1)          //chance to critically hit is 50 percent for the dragon
            this->setAttack(this->getAttack() + 1);  // gains one more attatck
	damage += thisAttack;    //add the damage of this attack to the total damage
        
        std::cout << "Troll attacks for " << thisAttack << " damage" << std::endl;
    }

   return damage;     //return total damage
}

	








































