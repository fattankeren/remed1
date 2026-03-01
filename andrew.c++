#include <iostream>
using namespace std;

int main() {
    long total = 1000000000;

    float untukPekerja = total * 0.40;
    float mandor = untukPekerja * 0.15;
    float kuli = (untukPekerja * 0.50) / 50;

    cout << "Mandor: " << mandor << endl;
    cout << "Gaji 1 kuli: " << kuli;
}