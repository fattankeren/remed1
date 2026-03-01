#include <iostream>
using namespace std;

int main(){
    float ton;
    cin >> ton;

    float solar = ton * 5 * 18500;
    float sewa = 1000000;
    float denda = (ton < 150) ? ton * 0.1 : 0;

    cout << "Total: " << solar + sewa + denda;
}