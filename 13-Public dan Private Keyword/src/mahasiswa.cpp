#include <iostream>
#include "mahasiswa.hpp"

// constructor selalu public
Mahasiswa::Mahasiswa(const char* name){
    this->namePublic = name;
    this->namePrivate = name;
}

void Mahasiswa::showDisplay(){
    std::cout <<"Nama Mahasiswa: " << this->namePrivate << std::endl;
    showDisplayPrivate();
}

void Mahasiswa::showDisplayPrivate(){
    std::cout <<"Nama Mahasiswa: " << this->namePrivate << std::endl;
}
