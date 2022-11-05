#include <iostream>
using namespace std;

int multiply(int a, int b) {
    cout << "Calling (int, int) overload\n";
    return a * b;
}

float multiply(float a, float b) {
    cout << "Calling (float, float) overload\n";
    return a * b;
}

int main(void) {
    int a = 10, b = 20;
    float c = 10.2, d = 20.1;
    auto x = multiply(a, b);
    auto y = multiply(c, d);

    cout << "Product of " << a << " and " << b << " is " << x << endl;
    cout << "Product of " << c << " and " << d << " is " << y << endl;

    return 0;
}