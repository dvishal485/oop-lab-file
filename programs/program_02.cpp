#include <iostream>
using namespace std;

int main(void)
{
    long unsigned int factorial = 1;
    int n;
    cout << "Input number for factorial : ";
    cin >> n;
    for (int k = 1; k <= n; k++)
        factorial *= k;
    cout << factorial << endl;
    return 0;
}
