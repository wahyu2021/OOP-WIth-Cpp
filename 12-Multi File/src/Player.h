#ifndef _PLAYER
#define _PLAYER
#include <string>
// Deklarasi class
class Player{
    public:
        std::string name;
        // Constructor
        Player(const char*); // dalam bentuk prototype
        void display(); // dalam bentuk prototype
        std::string getName();
        void setName(const char*);
};

#endif