#include <iostream>
#include <string>
using namespace std;

class Person {
  protected:
    string name;
    int age;

  public:
    Person(string name, int age) : name(name), age(age) {}
    void display() {
        cout << "Person Name\t: " << name << endl;
        cout << "Person Age\t: " << age << endl;
    }
};

class Literate : public Person { // single inheritance
  protected:
    bool employmentStatus;

  public:
    Literate(string name, int age, bool is_employed)
        : Person(name, age), employmentStatus(is_employed) {}
    void display() {
        Person::display();
        cout << "Employed\t: " << (employmentStatus ? "Yes" : "No") << endl;
    }
};

int main(void) {
    Literate s1("John", 20, true);
    Person s2("Jack", 22);

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    return 0;
}