#include <iostream>
#include <string>

using namespace std;

// Deklarasi Class

class Player{
    public:
        string name;

        // Constructor
        Player(const char*); // dalam bentuk prototype
        void display(); // dalam bentuk prototype
        string getName();
        void setName(const char*);
};

int main(){

    Player* playerObject = new Player("Dhea");
    playerObject->display();

    cout << "get name: " << playerObject->getName() << endl;

    cout << "rubah nama" << endl;
    playerObject->setName("Wahyu");
    playerObject->display(); 

    return 0;
}

// Penjabaran method
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << "Nama player: " << this->name << endl;
}

string Player::getName(){
    return this->name;
}


void Player::setName(const char* name){
    this->name = name;
}
