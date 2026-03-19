#include <iostream>
using namespace std;

class Calculator {
public:
    int sum(int a, int b);  // Function declaration
};

int Calculator::sum(int a, int b) {  // Function body outside class
    return a + b;
}

int main() {
    Calculator c;
    cout << "Sum = " << c.sum(10, 20);
    return 0;
}
