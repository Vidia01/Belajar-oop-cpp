#include <iostream>
#include <string>
using namespace std;


class Player{
    public:
        string nama;

        Player(const char* nama){
            Player::nama = nama;
            cout << "Player " << Player::nama <<" dibuat"<< endl;
        }

        ~Player(){
            cout <<"Player "<<Player::nama<<" dihapus" << endl;
        }
};

//contoh jika kasusnya berada di sebuah fungsi
void membuatPlayerStack(){
     Player stackPlayer = Player("fStack1");
}
void membuatPlayerHeap(){
    Player *heapPlayer = new Player("fHeap1");
    delete heapPlayer;
}

void membuatPlayerStackPinter(Player* &playerpointer){
    Player stackPlayer = Player("stack leak");
    playerpointer = &stackPlayer;
}

void membuatPlayerHeapPinter(Player *&playerpointer)
{
    Player* heapPlayer = new Player("heap leak");
    playerpointer = heapPlayer;
}

Player createStackPlayer(){
    Player stackPlayer = Player("Stack di retrun");
    return stackPlayer;
}

Player* createHeapPlayer(){
    Player* heapPlayer = new Player("heap di return");
    return heapPlayer;
}

int main(int argc, char const *argv[])
{
    {//dalam alokasi memory tanda setiap memori stack yang dibuat didalam "{" 
     //maka memori tersebut akan terhapus ketika bertemu "}"
        Player stackPlayer = Player("stack");
    }

    { // berbeda dengan heap memory heap tidak akan terhapus walaupun ada }
    // memory heap harus dihapus secara manual
        Player* heapPlayer = new Player("heap");
        //cara menghapus memory heap
        delete heapPlayer;
    }

    membuatPlayerStack();
    membuatPlayerHeap();

    //simulasi memory leak dimana jika memory yang harusnya terhapus, ternyata tidak
    cout << "\nmemorry leak" << endl;
    Player* playerPointer1;
    membuatPlayerStackPinter(playerPointer1);
    // cout << (*playerPointer1).nama <<endl;

    Player *playerPointer2;
    membuatPlayerHeapPinter(playerPointer2);
    cout << playerPointer2->nama << endl;
    delete playerPointer2;

    Player playerReturnStack = createStackPlayer();
    cout<< playerReturnStack.nama<<endl;

    Player* PlayerReturmHeap =createHeapPlayer();
    cout << PlayerReturmHeap->nama << endl;

    return 0;
}
