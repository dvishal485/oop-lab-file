#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    else if (n == 2)
        return true;
    else if (!(n % 2))
        return false;
    else
        for (int k = 3; k < sqrt(n); k = k + 2)
            if (n % k == 0)
                return false;
    return true;
}

int main(void)
{
    int n;
    cout << "Input a number to check upto : ";
    cin >> n;
    cout << "Prime numbers less than " << n << " : ";
    while (n)
    {
        if (isPrime(n))
            cout << n << ", ";
        n--;
    }
    cout << endl;
    return 0;
}
