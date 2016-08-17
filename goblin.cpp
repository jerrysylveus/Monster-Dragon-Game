// Jerry Sylveus
// sylveusj@oregonstate.edu
//

#include "goblin.hpp"
#include <cstdlib>

// constructor for goblin
Goblin::Goblin(int a, int st, string t)
{

   this->setAttack(a);
   this->setStrength(st);
   this->setTypeAttack(t);
}


int Goblin::Attack()  //total damage of every attack added together
{
   int damage = 0;
   for(int i=0;i<this->getAttack();i++)   //this->getAttack might have multiple hits
   {
	int thisAttack = rand() % this->getStrength() + 1;  //attack is betwen 1 and strength (inclusive)
        if(rand()%10 == 9)      //chance to crit is 1/10 for goblins (different for other classes)
            thisAttack *= 2;    //effect of crit is double 
      	damage += thisAttack;   //add the damage of this attack to the total damage

        std::cout << "Goblin attacks for " << thisAttack << " damage" << std::endl;

   }
   return damage;     //return total damage
}






















