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

class Student : public Literate { // multilevel inheritance
  protected:
    int roll;

  public:
    Student(string name, int age, bool is_employed, int roll)
        : Literate(name, age, is_employed), roll(roll) {}
    void display() {
        Literate::display();
        cout << "Roll Number\t: " << roll << endl;
    }
};

int main(void) {
    Student s1("John", 20, false, 527);
    Student s2("Sam", 21, true, 523);

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    return 0;
}