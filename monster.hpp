// Jerry Sylveusj
// sylveusj@oregonstate.edu


#ifndef MONSTER_hpp
#define MONSTER_hpp
#include <iostream>
#include <string>
using std::string;

class Monster  // Parent class
{
private:
   int attack;        // determines how many times an attack occurs
   int strength;     // the strength of the attack
   string typeOfAttack;     // the type of the attack;\

public:
    virtual int Attack() = 0;       // Abstract class;
    
    
    void setAttack(int);        // setting the attack
    int getAttack();            // returning the attack

    void setStrength(int);      // setting the strength
    int getStrength();          // returning the strength
    
    void setTypeAttack(string);     // setting the type of attack
    string getTypeAttack();         //  returning the type of attack


};
#endif

































