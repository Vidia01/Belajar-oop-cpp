#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{ //ini cara membuat class
    public: //ini akses modif, ada 3 macam public, private, protected
    string nama;
    int umur;
    string hobi;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1; // membuat objek dari class mahasiswa
    data1.nama = "Vidia Alfisyahrin"; //cara mengisi data dari suatu objek
    data1.umur = 23;
    data1.hobi = "bersepeda";
    cout << "nama data1 : " << data1.nama << endl;
    cout << "umur data1 : " << data1.umur << endl;
    cout << "hobi data1 : " << data1.hobi << endl;
    return 0;
}
