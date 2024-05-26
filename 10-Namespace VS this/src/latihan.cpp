#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        double IPK;

        Mahasiswa(const char* nama, const char* NIM, double IPK){
            this->setNama(nama);
            this->setNIM(NIM);
            this->setIPK(IPK);
        }

        void setNama(const char* nama){
            this->nama = nama;
        }

        void setNIM(const char* NIM){
            this->NIM = NIM;
        }
        
        void setIPK(double IPK){
            this->IPK = IPK;
        }

        void show(){
            cout << "Nama: " << this->nama << endl;
            cout << "NIM : " << this->NIM << endl;
            cout << "IPK : " << this->IPK << endl;
        }

        ~Mahasiswa(){
            cout << this->nama << " " << this->NIM << " di hapus dari heap memory\n";
        }
};

int main(){

    Mahasiswa* mahasiswa1 = new Mahasiswa("","",0);
    mahasiswa1->setNama("Dhea");
    mahasiswa1->setNIM("062340833115");
    mahasiswa1->setIPK(4.0);
    mahasiswa1->show();
    delete mahasiswa1;

    return 0;
}