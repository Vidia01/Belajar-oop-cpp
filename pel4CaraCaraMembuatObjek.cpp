#include <iostream>
#include <string>

using namespace std;

class TanpaConstructor{
    public:
        string data;
        void show(){
            cout<<data<<endl;
        }
};

class DenganConstructor{
    public :
        string data;

        DenganConstructor(const char* data){
            DenganConstructor::data = data;
        }
        void show(){
            cout << data << endl;
        }
};

int main(int argc, char const *argv[])
{
    //=========================================================
    //stackmemory
    //=========================================================
    //cara 1 jika class tanpa constructor
    TanpaConstructor object1;
    object1.data="ini objek 1";
    object1.show();

    //cara 2 jika class punya constructor
    DenganConstructor object2 = DenganConstructor("ini objek 2");
    object2.show();

    //cara 3 cara lain dari cara 2
    DenganConstructor object3("ini objek 3");
    object3.show();

    //=========================================================
    // heapmemory
    //=========================================================
    // cara 4 membuat objek pada heap memory
    DenganConstructor* object4 = new DenganConstructor("ini objek 4");
    (*object4).show(); //menggunakan refrence untuk akses methodnya
    object4->show();//atau bisa menggunakan operator arrow
    string data = object4->data;
    cout<<data<<endl;

    //cara 5 cara lain dari cara 4
    DenganConstructor* object5;
    object5 = new DenganConstructor("ini objek 5");
    object5->show();

    return 0;
}
