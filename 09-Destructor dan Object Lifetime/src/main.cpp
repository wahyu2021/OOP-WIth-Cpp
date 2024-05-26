#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string nama;
        
        // Constructor
        Player(const char* nama){
            cout << "player " << Player::nama << " dibuat" << endl;
            Player::nama = nama;
        }

        // Destructor
        ~Player(){
            cout << "player " << Player::nama << " dihapus" << endl;
        }

};

void membuatPlayerStack(){
    Player stackPlayer = Player("stack player");
}

void membuatPlayerHeap(){
    Player* heapPlayer = new Player("heap Player");
    delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer){
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player* &playerPointer){
    Player* heapPlayer = new Player("Heap");
    playerPointer = heapPlayer;
    delete heapPlayer;
}

int main(){
    membuatPlayerStack();
    membuatPlayerHeap();

    // simulasi memory leak
    cout << "\nMemory Leak" << endl;
    Player* playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    cout << (*playerPointer1).nama << endl;

    Player* playerPointer2;
    membuatPlayerHeapPointer(playerPointer2);
    cout << playerPointer2->nama << endl;
    playerPointer2->nama = "acak-acakan";
    cout << playerPointer2->nama << endl;
    delete playerPointer2;


    return 0;
}