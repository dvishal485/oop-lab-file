#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cout << "Enter two numbers : ";
    try {
        cin >> a >> b;
        if (cin.fail()) {
            throw "Invalid input";
        }
        if (b == 0) {
            throw "Division by zero";
        }
        throw a / b;
    } catch (const char *e) {
        cout << e << endl;
    } catch (int x) {
        cout << "Divion answer (by throwing error) : " << x << endl;
    } catch (...) {
        cout << "Unknown exception" << endl;
    }
    return 0;
}
