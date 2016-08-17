
// Jerry Sylveus
// sylveuj@oregonstate.edu

#ifndef dragon_h
#define dragon_h
#include <string>

#include "monster.hpp"

class Dragon:public Monster     //inheriting from monster
{
private:
   int attack;     // determines how many times an attack occurs
   int strength;       // the strength of the attack
   string typeOfAttack;    // the type of the attack
    
public:
   Dragon();   // default constructor
   Dragon(int, int, string);   // constructor taking parameters
   int Attack();       // function for the attack




};
#endif















































