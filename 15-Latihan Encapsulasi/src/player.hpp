#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "weapon.hpp"

class Player{
    private:
        std::string name;
        int health;
        Weapon* weapon;
        
    public:
        Player(const char*);
        void healthPlayer();
        // tampilan
        void display();
        std::string showName();
        int showHealth();
        void setHealth();
        // setter

};

#endif