#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;
    public:
        Hero(const char* name){
            this->name = name;
        }

        void setName(const char* name){
            this->name = name;
        }

        void display() const{
            cout << "Name : " << this->name << endl;
        }
};

int main(){
    
    Hero hero1 = Hero ("otong");
    const Hero hero2 = Hero ("ucup");
    hero1.display();
    hero1.setName("Saitama");
    hero1.display();
    hero2.display();
    return 0;
}