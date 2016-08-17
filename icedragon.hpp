// Jerry Sylveus
// sylveusj@oregonstate.edu

#ifndef icedragon_h
#define icedragon_h
#include "dragon.hpp"


class IceDragon:public Dragon  // inherit from dragon which inherit from Monster
{
    
    
public:
   IceDragon(int, int, string);   // contructor
   int Attack();       // function to attack
    
};

#endif /* icedragon_h */



































