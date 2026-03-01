#include <iostream>
using namespace std;

int main() {
    int hijau=30, kuning=5, merah=20;

    for(int i=0;i<3;i++){
        for(int j=hijau;j>0;j--)
            cout<<"Hijau: "<<j<<endl;
        for(int j=kuning;j>0;j--)
            cout<<"Kuning: "<<j<<endl;
        for(int j=merah;j>0;j--)
            cout<<"Merah: "<<j<<endl;
    }
}