// Jerry Sylveus
// sylveusj@oregonstat.edu
//
#ifndef firedragon_h
#define firedragon_h

#include "dragon.hpp"

class FireDragon:public Dragon  // inherit from dragon which inherits from Monster
{
    
public:
   FireDragon(int, int, string);  // contructor with parameter
   int Attack();       // function to attack
};


#endif /* firedragon_h */


































