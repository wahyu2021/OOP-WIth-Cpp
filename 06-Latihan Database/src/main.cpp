#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }
        
        string stringfy(){
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* filename){
            DBase::fileName = filename;
        }

        void save(Mahasiswa data){
            // cout << data.nama << endl;
            // cout << data.NIM << endl;
            // cout << data.jurusan << endl;

            DBase::out.open(DBase::fileName, ios::app);
            DBase::out << data.stringfy();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName, ios::in);
            string nama,NIM,jurusan;
            int index = 1;
            
            while(!DBase::in.eof()){
                DBase::in >> nama;
                DBase::in >> NIM;
                DBase::in >> jurusan;
                cout << index++ << ".\t" << nama << "\t" << NIM << "\t" << jurusan << endl;
            }
            DBase::in.close();
        }
};

int main(int argc, char const *argv[]){
    
    // membuat obect-object yang diperlukan
    // Mahasiswa dataMahasiswa = Mahasiswa("dhea", "062340833115", "Manajemen Informatika");
    DBase database = DBase("data.txt");

    // input user
    string nama,NIM,jurusan;
    cout << endl;
    cout << "MASUKKAN DATA MAHASISWA" << endl;
    cout << "Nama : ";
    getline(cin, nama);
    cout << endl;
    cout << "NIM : ";
    getline(cin,NIM);
    cout << endl;
    cout << "Jurusan : ";
    getline(cin, jurusan);
    cout << endl;

    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);

    // save data ke database
    database.save(dataMahasiswa);

    //tampilkan seluruh data di database
    database.showAll();

    return 0;
}
