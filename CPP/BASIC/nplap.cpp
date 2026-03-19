#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = a + b;

    cout << "Sum in binary: ";
    for(int i = 7; i >= 0; i--) {
        cout << ((sum >> i) & 1);
    }

    return 0;
}