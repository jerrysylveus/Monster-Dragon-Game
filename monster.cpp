// Jerry Sylveus
// sylveusj@oregonstate.edu


#include "monster.hpp"
#include <iostream>
#include <string>
using std::string;

// setting the attack
void Monster::setAttack(int a)
{
   attack = a;
}

// returning the attack
int Monster::getAttack()
{
   return attack;
}


// setting the strength
void Monster::setStrength(int st)
{
   strength = st;
}


// returning the strength
int Monster::getStrength()
{
   return strength;
}

// setting the type of attack
void Monster::setTypeAttack(string t)
{
   typeOfAttack = t;
}


// void returning the type of Attack
string Monster::getTypeAttack()
{
    return typeOfAttack;
}














































































