#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public: 
    string nama;
    int umur;
    string hobi;

    Mahasiswa(string inputNama, int inputUmur, string inputHobi){//ini adalah construct ia membuat fungsi dengan nama
        Mahasiswa::nama = inputNama;
        Mahasiswa::umur = inputUmur;
        Mahasiswa::hobi = inputHobi;

        //==================================================
        //cara2 menampilkan data
        cout << "nama data : " << Mahasiswa::nama << endl;
        cout << "umur data : " << Mahasiswa::umur << endl;
        cout << "hobi data : " << Mahasiswa::hobi << endl;
        //===================================================
    }
};

int main(int argc, char const *argv[])
{
    //==========================================
    //cara1 mengisi data, terlalu panjang
    // Mahasiswa data1;               
    // data1.nama = "Vidia Alfisyahrin"; 
    // data1.umur = 23;
    // data1.hobi = "bersepeda";
    //===========================================
    //Cara2 Mengisi Data
    Mahasiswa data1 = Mahasiswa("Vidia Alfisyahrin", 23, "Bersepeda");
    //===========================================

    //===============================================
    // cara1 menampilkan data 
    // cout << "nama data1 : " << data1.nama << endl;
    // cout << "umur data1 : " << data1.umur << endl;
    // cout << "hobi data1 : " << data1.hobi << endl;
    //===============================================
    return 0;
}
