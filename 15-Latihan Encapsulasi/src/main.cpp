#include <iostream>
#include <string>
#include <stdlib.h>

#include "player.hpp"
#include "weapon.hpp"

using namespace std;

int main(int argc, char const *argv[]){

    int turn;
    bool start;
    char attack;
    
    Player* player1 = new Player("Foxe");
    Weapon* weapon1 = new Weapon("M4A1");
    Player* player2 = new Player("Foxy");
    Weapon* weapon2 = new Weapon("AK-47");

    // implementasi setter untuk meng-equip weapon
    player1->display();
    player2->display();

    cout << "Serang (Y/N)? ";
    cin >> attack;

    if((attack == 'y')||(attack == 'Y')){
        start = true;
    } else if((attack == 'n')||(attack == 'N')){
        start = false;
    } else{
        start = false;
        cout << "salah pilihan" << endl;
    }

    while(start){
        if((player1->showHealth() != 0)||(player1->showHealth() != 0)){
            turn = rand()%2+1;
            switch (turn){
            case 1: 
                cout << player1->showName() << " Menyerang " << player2->showName();
                if(player2->showHealth() <= 0){
                    player2->setHealth();
                } else {
                    player2->healthPlayer();
                }
                break;
            case 2:
                cout << player2->showName() << " Menyerang " << player1->showName();
                if(player1->showHealth() <= 0){
                    player1->setHealth();
                } else {
                    player1->healthPlayer();
                }
                break;
            default:
                break;
            }
        } else{
            start = false;
            if(player1->showHealth() == 0){
                cout << player1->showName() << " kalah\n";
            } else{
                cout << player2->showName() << " kalah\n";
            }
        }
    }

    cout << "Akhir Program" << endl;

    return 0;
}

// membuat player saling menyerang
// saat weapon mengeluarkan serangan maka health player berkurang
