#include <iostream>
using namespace std;

class Mahasiswa { 

private : 
    static int nim;
public: 
    int id;
    string nama;

    void SetId();
    void printall();

    static void setNim(int pnim) {
        nim = pnim;
    };

    static int getNim() {
        return nim;
    };

    Mahasiswa(string pnama) :nama (pnama) {
        SetId();
    }
};

int Mahasiswa::nim = 0;

void Mahasiswa ::SetId() {
    id = ++nim;
};

void Mahasiswa ::printall() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};