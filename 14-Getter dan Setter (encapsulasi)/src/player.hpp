#ifndef _PLAYER
#define _PLAYER
#include <string>

class Player{
    private:
        std::string name;
        double attackPower;
        int level;
        int exp;
    public:
        Player(const char*);
        // getter, ini artinya kita akan membuat atribut menjadi read-only
        std::string getName();
        // Setter, ini untuk write data ke class
        void addExperience(int);
        void display();
};
#endif