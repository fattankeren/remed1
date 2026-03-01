#include <iostream>
using namespace std;

int main(){
    int stok = 10;
    string nama;

    while(stok > 0){
        cin >> nama;
        if(nama == "keluar") break;
        stok--;
        cout << "Sisa: " << stok << endl;
    }
}