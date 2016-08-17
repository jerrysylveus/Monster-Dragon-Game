// Jerry Sylveus
// sylveusj@oregonstate.edu

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstdio>

#include "monster.hpp"
#include "troll.hpp"
#include "goblin.hpp"
#include "dragon.hpp"
#include "icedragon.hpp"
#include "firedragon.hpp"


int main(int argc, const char * argv[]) {
    srand(1234);
    
    
   
   Monster *arr[100];
   int num;
   for(int x = 0; x < 100; x++){
	num = rand() % 5;
        switch(num){
	    case 0: arr[x] = new Goblin(1, 30, "Scratch"); break;
            case 1: arr[x] = new Troll(1, 30, "Scratch"); break;
            case 2: arr[x] = new Dragon(4, 100, "Scratch"); break;
            case 3: arr[x] = new IceDragon(4, 100, "Scratch"); break;
            case 4: arr[x] = new FireDragon(4, 100, "Scratch"); break;
                
       }
        
   }/Users/jerrysylveus/Desktop/lab5.cpp
    
    
   for(int j = 0; j < 100; j++){
        std::cout << "Monster " << j << ":" << std::endl;
        int totalDamage =  arr[j]->Attack() ;
        std::cout << "Total Damage: " << totalDamage << std::endl;
        std::cout << std::endl;
        
    }
    
   
    
   return 0;
    
    
}


























































