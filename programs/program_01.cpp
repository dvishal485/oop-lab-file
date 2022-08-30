#include <iostream>
using namespace std;

void fibonacci(int k)
{
    unsigned long int n2 = 1, n1 = 0, temp = 1;
    for (int n = 1; n <= k; n++)
    {
        cout << n1 << ", ";
        temp = n2 + n1;
        n1 = n2;
        n2 = temp;
    }
    cout << endl;
}

int main(void)
{
    fibonacci(50);
    return 0;
}
