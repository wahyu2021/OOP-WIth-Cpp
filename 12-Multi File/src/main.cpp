#include <iostream>
#include <string>

// eksternal definition

#include "Player.h"

using namespace std;

int main(){

    Player* playerObject = new Player("Dhea");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;

    cout << "rubah nama" << endl;
    playerObject->setName("Wahyu");
    playerObject->display(); 

    return 0;
}
