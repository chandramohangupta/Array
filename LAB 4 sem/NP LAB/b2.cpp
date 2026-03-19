#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary: ";

    for(int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
    }

    return 0;
}