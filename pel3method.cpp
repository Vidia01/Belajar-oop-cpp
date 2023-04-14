#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    int umur;
    string hobi;

    Mahasiswa(string inputNama, int inputUmur, string inputHobi)
    { 
        Mahasiswa::nama = inputNama;
        Mahasiswa::umur = inputUmur;
        Mahasiswa::hobi = inputHobi;
    }

    void tampildata(){
        cout << "nama data : " << Mahasiswa::nama << endl;
        cout << "umur data : " << Mahasiswa::umur << endl;
        cout << "hobi data : " << Mahasiswa::hobi << endl;
    }

    void ubahama(const char* namabaru){
        Mahasiswa::nama = namabaru;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1 = Mahasiswa("Vidia Alfisyahrin", 23, "Bersepeda");
    data1.tampildata();
    data1.ubahama("routesphere");
    data1.tampildata();

    return 0;
}
