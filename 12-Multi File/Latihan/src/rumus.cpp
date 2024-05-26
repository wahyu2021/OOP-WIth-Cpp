#include <iostream>
#include "rumus.h"

Persegi::Persegi(int sisi){
    this->sisi = sisi;
}

int Persegi::luasPersegi(int sisi){
    this->sisi = sisi;
    return this->hasil = sisi*sisi;
}

void Persegi::show(){
    std::cout << "Luas Persegi adalah: " << this->hasil << std::endl;
}