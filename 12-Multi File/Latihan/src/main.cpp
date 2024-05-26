#include <iostream>
#include "rumus.h"
using namespace std;

int main(){
    Persegi* persegi1 = new Persegi(0);
    persegi1->luasPersegi(10);
    persegi1->show();

    return 0;
}