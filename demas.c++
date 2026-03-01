#include <iostream>
using namespace std;

int main() {
    float suhu[10];
    float total=0;

    for(int i=0;i<10;i++){
        cin >> suhu[i];
        total += suhu[i];
    }

    float rata = total/10;

    float tertinggi = suhu[0];
    int jam = 0;

    for(int i=1;i<10;i++){
        if(suhu[i] > tertinggi){
            tertinggi = suhu[i];
            jam = i;
        }
    }

    cout << "Rata-rata: " << rata << endl;
    cout << "Tertinggi pada jam ke: " << jam;
}