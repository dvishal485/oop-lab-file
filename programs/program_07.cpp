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

class Literate : public Person {
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

class Student : public Literate {
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

class Staff : public Literate {
  protected:
    int staffId;

  public:
    Staff(string name, int age, bool is_employed, int staff_id)
        : Literate(name, age, is_employed), staffId(staff_id) {}
    void display() {
        Literate::display();
        cout << "Staff ID\t: " << staffId << endl;
    }
};

int main(void) {
    Student s1("John", 20, false, 527);
    Staff s2("Jack", 22, true, 768);
    Student s3("Sam", 21, true, 523);

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();

    return 0;
}