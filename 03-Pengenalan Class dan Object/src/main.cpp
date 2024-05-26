#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

class Perkenalan{
    public:
    string nama;
    string tanggalLahir;
    string hobi;
    string kuliah;
    string semester;
};

int main(){

    Mahasiswa data1;
    Perkenalan wahyu;
    data1.nama = "Wahyu";
    data1.NIM = "1234433433";
    data1.jurusan = "Manajemen Informatika";
    data1.IPK = 3.99;

    cout << data1.nama << endl;
    cout << data1.NIM << endl;
    cout << data1.jurusan << endl;
    cout << data1.IPK << endl;
    cout << endl;
    cout << endl;
    wahyu.nama = "Wahyu Wahid Nugroho";
    wahyu.tanggalLahir = "31 Maret 2005";
    wahyu.hobi = "Bermain Basket";
    wahyu.kuliah = "Politeknik Negeri Sriwijaya";
    wahyu.semester = "Semester 1";

    cout << wahyu.nama << endl;
    cout << wahyu.tanggalLahir << endl;
    cout << wahyu.hobi << endl;
    cout << wahyu.kuliah << endl;
    cout << wahyu.semester << endl;

    return 0;
}
