#include <iostream>
using namespace std;

class Mahasiswa { 

public: 
    static int nim;
    int id;
    string nama;

    void SetId();
    void printall();

    Mahasiswa(string pnama) :nama (pnama) {
        SetId();
    }
};

int Mahasiswa::nim = 10;

void Mahasiswa ::SetId() {
    id = ++nim;
};

void Mahasiswa ::printall() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

