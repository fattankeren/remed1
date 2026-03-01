#include <iostream>
using namespace std;

int main() {
    int workers, houses;
    cin >> workers >> houses;

    int totalBat = houses * 50;
    int totalPerJam = workers * 12;

    float jam = (float)totalBat / totalPerJam;
    int menit = jam * 60;

    cout << "Waktu: " << (int)jam << " jam "
         << menit % 60 << " menit";
}