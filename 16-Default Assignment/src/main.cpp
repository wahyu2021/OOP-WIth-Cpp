#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
        double power;
    
    public:
        Hero(const char* name = "Player", double health = 100, double power = 125){
            this->name = name;
            this->health = health;
            this->power = power;
        }

        void display(){
            cout << "\nPlayer name = " << this->name << endl;
            cout << "Health = " << this->health << endl;
            cout << "Power = " << this->power << endl;
        }
};

int main(int argc, char const *argv[]){
    Hero* hero1 = new Hero("Dhea",100);
    hero1->display();

    Hero hero2 = Hero(); 
    hero2.display();

    Hero* hero3 = new Hero("Nadhira");
    hero3->display();

    Hero* hero4 = new Hero("Wahyu", 100, 125);

    return 0;
}
