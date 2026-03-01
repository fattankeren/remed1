#include <iostream>
using namespace std;

int main(){
    float jarak;
    int rating;
    cin >> jarak >> rating;

    float harga = jarak * 2500;
    if(jarak > 50) harga += 20000;
    if(rating >= 4) harga += harga * 0.05;

    cout << harga;
}