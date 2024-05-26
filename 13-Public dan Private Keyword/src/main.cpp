#include <iostream>
#include <string>
#include "mahasiswa.hpp"

using namespace std;

int main(){
    Mahasiswa* mahasiswa1 = new Mahasiswa("Dhea");
    // kita akan coba akses data public dan private
    cout << mahasiswa1->namePublic << endl; // karena public dapat di akses
    // cout << mahasiswa1->namePrivate << endl; karena private tidak dapat diakses
    
    Mahasiswa* mahasiswa2 = new Mahasiswa("Fasya");
    mahasiswa2->showDisplay();
    // mahasiswa2->showDisplayPrivate(); tidak bisa dilakukan karena private

    Mahasiswa* mahasiswa3 = new Mahasiswa("Nadhira");
    mahasiswa3->showDisplay();

    return 0;
}