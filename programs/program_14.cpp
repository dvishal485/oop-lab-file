#include <iostream>
using namespace std;

template <class T> class compare {
    T a, b;

  public:
    compare(T a, T b) : a(a), b(b) {}
    T max() { return a > b ? a : b; }
    T min() { return a < b ? a : b; }
};

int main(void) {
    compare<int> c1(2, 3);
    compare<float> c2(2.5, 3.1);
    compare<char> c3('a', 'A');
    cout << "Max of 2 and 3 :\t" << c1.max() << endl;
    cout << "Min of 2 and 3 :\t" << c1.min() << endl;
    cout << "Max of 2.5 and 3.1 :\t" << c2.max() << endl;
    cout << "Min of 2.5 and 3.1 :\t" << c2.min() << endl;
    cout << "Min of a and A :\t" << c3.min() << endl;
    cout << "Max of a and A :\t" << c3.max() << endl;
    return 0;
}