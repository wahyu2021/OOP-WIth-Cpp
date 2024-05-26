#ifndef __WEAPON
#define __WEAPON

#include <string>
#include "player.hpp"

class Weapon{
    private:
        std::string name;
        int attackPower;
        Player* player;
    
    public:
        Weapon(const char*);
        int attack(int);
        // tampilan
        void display();
        // getter
        std::string getName();
};

#endif