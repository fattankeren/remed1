#include <iostream>
using namespace std;

int main() {
    int data[10];
    int hadir = 0;

    for (int i = 0; i < 10; i++) {
        cin >> data[i];
        if (data[i] == 0)
            hadir++;
    }

    float persen = (hadir / 10.0) * 100;

    cout << "Jumlah hadir: " << hadir << endl;
    cout << "Persentase: " << persen << "%";
}