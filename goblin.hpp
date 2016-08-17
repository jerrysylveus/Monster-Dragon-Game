// Jerry Sylveus
// sylveusj@oregonstate.edu

#ifndef GOBLIN_hpp
#define GOBLIN_hpp

#include <string>
#include "monster.hpp"
using std::string;

class Goblin:public Monster  // inheriting from monster
{
 
public:
   Goblin(int, int, string);   // constructor
   int Attack();               // attack function

};

#endif /* goblin_h */



















































