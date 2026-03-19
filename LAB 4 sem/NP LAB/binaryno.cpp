#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    for(int i = 7; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
}

int main() {
    int a, b, c, d;
    cout << "Enter IP (4 numbers): ";
    cin >> a >> b >> c >> d;

    decimalToBinary(a); cout << ".";
    decimalToBinary(b); cout << ".";
    decimalToBinary(c); cout << ".";
    decimalToBinary(d);

    return 0;
}