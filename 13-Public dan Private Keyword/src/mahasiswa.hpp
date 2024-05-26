#ifndef _MAHASISWA
#define _MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa{
    // Attribute
    public:
        std::string namePublic; // ini dapat diakses oleh siapapun termasuk yang diluar kelas

    private:
        std::string namePrivate; // ini hanya dapat diakses oleh class itu sendiri

    // Methods dan constructor
    public:
        // constructor selalu public
        Mahasiswa(const char*);
        void showDisplay();
    
    private:
        void showDisplayPrivate();
};

#endif