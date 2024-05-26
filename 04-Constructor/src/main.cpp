#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos{
    public:
        string dataString;
        int dataInteger;
};

// class dengan constructor
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        // // ini adalah constructor
        // Mahasiswa(){
        //     cout << "ini adalah constructor" << endl;
        // }

        // constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
            // ini artinya kita akan mengambil variabel nama diclass Mahasiswa
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;
            cout << "Nama   :" <<Mahasiswa::nama << endl;
            cout << "NIM    :" <<Mahasiswa::NIM << endl;
            cout << "Jurusan:" <<Mahasiswa::jurusan << endl;
            cout << "IPK    :" <<Mahasiswa::IPK << endl;
            cout << endl;
        }
};

int main(int argc, char const *argv[]){

    // cara memanggilnya
    Mahasiswa mahasiswa1 = Mahasiswa("Dhea Fasya Nadhira", "062340833115", "Manajemen Informatika", 3.99);
    Mahasiswa mahasiswa2 = Mahasiswa("Wahyu Wahid Nugroho", "062340833133", "Manajemen Informatika", 4.00);

    // Polos objectPolos;
    // objectPolos.dataString = "Polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.dataString << endl;
    // cout << objectPolos.dataInteger << endl;
    
    return 0;
}
