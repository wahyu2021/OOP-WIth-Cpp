#include <iostream>
#include <string>
#include "player.hpp"

using namespace std;


int main(int argc, char const *argv[]){
    Player player1 = Player("Foxy"); // ini adalah object di stack
    player1.display();

    // Implementasi dari getter
    cout << player1.getName() << endl; // read
    // player1.name = "Lone"; // tidak bisa di write

    // Kegiatan bertarung
    cout << "Bertarung\n" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya
    player1.display();

    // Kegiatan bertarung
    cout << "Bertarung lagi\n" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya
    player1.display();

    return 0;
}
