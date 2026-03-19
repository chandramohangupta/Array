#include <iostream>
using namespace std;

int add(int a, int b);  // function declaration

class Sum {
public:
    void calculate() {
        int x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;

        int result = add(x, y);  // calling function outside class
        cout << "Sum = " << result;
    }
};

// function definition outside class
int add(int a, int b) {
    return a + b;
}

int main() {
    Sum obj;
    obj.calculate();
    return 0;
}
