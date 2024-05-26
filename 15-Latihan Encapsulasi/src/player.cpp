#include "player.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>

Player::Player(const char* name){
    this->name = name;
    this->health = 100;
}

void Player::display(){
    std::cout << "Player " << this->name << std::endl;
    std::cout << "Menggunakan senjata " << this->weapon->getName() << std::endl;
}

std::string Player::showName(){
    return this->name;
}

int Player::showHealth(){
    return this->health;
}

void Player::setHealth(){
    this->health = 0;
}

void Player::healthPlayer(){
    this->health -= this->weapon->attack(rand()%100+1);
}

