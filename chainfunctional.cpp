#include <iostream>
using namespace std;

class buku{
    string judul;

    public:
        buku &setjudul(string judul){
            this->judul= judul; 
            return *this; 
        }
        string getjudul(){
            return this->judul;
        }
};

int main(){
    buku bukunya;
    //cout<< bukunya.setget ("Matematika");
    //cout << bukunya.getjudul()<<endl;
    cout << bukunya.setjudul("Matematika").getjudul();
    return 0;
}