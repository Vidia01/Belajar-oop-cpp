#include <iostream>
using namespace std;

int main()
{
   int *ptr = new int; //mengalokasikan memori untuk variabel integer pada heap
   *ptr = 10; //memberikan nilai 10 pada variabel integer
   
   cout << "Nilai variabel adalah " << *ptr << endl;
   delete ptr; //menghapus memori yang telah dialokasikan pada heap
   return 0;
}
