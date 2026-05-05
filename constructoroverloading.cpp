#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
    int nim;
    string nama ;
    public:
    mahasiswa(); 
    mahasiswa(int);
    mahasiswa(int inim, string inama);
    void cetak();
    
};