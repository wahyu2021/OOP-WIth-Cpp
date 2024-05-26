#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        double IPK;

        // Method/function
        Mahasiswa(string inputNama, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::IPK = inputIPK;
        }

        // Method tanpa parameter dan tanpa return
        void tampilkanData (){
            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::IPK << endl;
        }

        // Method dengan parameter dan tanpa return
        void ubahNama(const char* namaBaru){
            Mahasiswa::nama = namaBaru;
        }

        // Method tanpa parameter dan dengan return
        string getNama(){
            return "apaloh";
        }

        double getIPK(){
            return Mahasiswa::IPK;
        }

        // Method dengan parameter dan dengan return
        double katrolIPK(const double &tambahanNilai){
            return Mahasiswa::IPK + tambahanNilai;
        }
};


int main(int argc, char const *argv[]){
    Mahasiswa mahasiswa1 = Mahasiswa("wahyu", 3.99);
    Mahasiswa mahasiswa2 = Mahasiswa("Dhea", 3.5);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("Wahid");
    mahasiswa2.ubahNama("Fasya");
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama = " << dataNama << endl;
    cout << "dataIPK = " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol " << mahasiswa2.katrolIPK(0.3) << endl;

    return 0;
}
