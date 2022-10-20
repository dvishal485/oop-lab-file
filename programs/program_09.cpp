#include <iostream>
#include <string>
using namespace std;

class Person {
  protected:
    string name;
    int age;
    bool employmentStatus;

  public:
    Person(string name, int age, bool is_employed)
        : name(name), age(age), employmentStatus(is_employed) {}
    void display() {
        cout << "Person Name\t: " << name << endl;
        cout << "Person Age\t: " << age << endl;
        cout << "Employed\t: " << (employmentStatus ? "Yes" : "No") << endl;
    }
};

class Student : public Person {
    // multiple inheritance from base class Literate
  protected:
    int roll;

  public:
    Student(string name, int age, bool is_employed, int roll)
        : Person(name, age, is_employed), roll(roll) {}
    void display() {
        Person::display();
        cout << "Roll Number\t: " << roll << endl;
    }
};
class Staff : public Person {
    // multiple inheritance from base class Literate
  protected:
    int staffId;

  public:
    Staff(string name, int age, bool is_employed, int staff_id)
        : Person(name, age, is_employed), staffId(staff_id) {}
    void display() {
        Person::display();
        cout << "Staff ID\t: " << staffId << endl;
    }
};

int main(void) {
    Student s1("John", 20, false, 527);
    Staff s2("Sam", 21, true, 523);

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    return 0;
}
