#include <iostream>
#include <string>
using namespace std;

class str {
    string s;

  public:
    str(string s) : s(s) {}
    str operator+(str &s2) { return str(s + s2.s); }
    str operator*(int n) {
        if (n <= 0)
            return str("");

        string temp = s;
        for (int i = 1; i < n; i++)
            s += temp;

        return str(s);
    }
    void show() { cout << s << endl; }
};

int main(void) {
    str s1("Hello"), s2("World");
    str s3 = s1 + s2;
    cout << "String 1 : ";
    s1.show();
    cout << "String 2 : ";
    s2.show();
    cout << "Addition : ";
    s3.show();
    s3 = s1 * 4;
    cout << "Multiplication : ";
    s3.show();
    return 0;
}
