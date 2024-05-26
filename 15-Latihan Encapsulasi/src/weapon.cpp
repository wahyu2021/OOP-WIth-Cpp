#include "weapon.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

Weapon::Weapon(const char* name){
    this->name = name;
}

int Weapon::attack(int damage){
    return damage;
}

void Weapon::display(){
    std::cout << "Weapon ini adalah " << this->name << std::endl;
}

std::string Weapon::getName(){
    return this->name;
}