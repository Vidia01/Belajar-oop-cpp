#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string nim;
        string jurusan;

        Mahasiswa(string nama, string nim, string jurusan)
        {
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::jurusan = jurusan;
        }

        string stringify(){
            return "\n" + nama + " " + nim +" "+jurusan;
        }
};

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName){
            DBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            cout<<data.nama<<endl;
            cout<<data.nim<<endl;
            cout<<data.jurusan<<endl;

            DBase::out.open(DBase::fileName, ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName, ios::in);
            string nama, nim, jurusan;
            int index =1;
            while(!DBase::in.eof()){
                DBase::in >> nama ;
                DBase::in >> nim;
                DBase::in >> jurusan;
                cout<<index++<<". "<<nama<<" \t"<<nim<<" \t"<<jurusan<<endl;
            }
            DBase::in.close();
        }
};
int main(int argc, char const *argv[])
{
        DBase database = DBase("data.txt");
        database.showAll();

        string nama, nim, jurusan;
        cout << "Masukkan Data Mahasiswa" << endl;
        cout << "Nama";
        cin >> nama;
        cout << "NIM";
        cin >> nim;
        cout << "Jurusan";
        cin >> jurusan;

        // membuat objek objek yang diperlukan

        Mahasiswa dataMahasiswa = Mahasiswa(nama, nim, jurusan);

        // save data ke database
        database.save(dataMahasiswa);

        // tampilkan seluruh data didatabase
        return 0;
}
