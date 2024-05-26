#include <iostream>
#include <string>

using namespace std;

// data member
class ClassTypes{
    public:
        string dataStr;
        double dataDouble;
        double m_dataDouble;

        ClassTypes(const char* dataStr, double dataDouble){
            // dengan menggunakan namespace dari class
            ClassTypes::dataStr = dataStr;

            // dengan menggunakan "this"
            cout << this << endl;
            this->dataDouble = dataDouble; // ini sama dengan ClassTypes::dataDouble

            // dengan menggunakan konvensi penamaan
            m_dataDouble = dataDouble;
        }
};

// member functionB
class Player{
    public:
        string name;
        double power;
        int health;

        Player(const char* name, double power){
            Player::setName(name);
            this->setPower(power);
        }

        void setName(const char* name){
            this->name = name;
        }

        void setPower(double power){
            this->power = power;
        }

        void sethealth(int);
};

void Player::sethealth(int health){
    this->health = health;
}

int main(){

    ClassTypes* object1 = new ClassTypes("object 1", 0.05);
    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDouble << endl;

    Player* player1 = new Player("ucup", 100);
    cout << player1->name << endl;
    cout << player1->power << endl;
    player1->sethealth(10);
    cout << player1->health << endl;


    return 0;
}
