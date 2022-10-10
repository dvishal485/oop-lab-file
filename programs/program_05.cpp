#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    static int count;

  public:
    string name;
    int age;
    int roll;
    // default constructor
    Student() {
        name = "";
        age = 0;
        roll = 0;
        count++;
    }
    // parameterized constructor
    Student(string name, int age, int roll) {
        this->name = name;
        this->age = age;
        this->roll = roll;
        count++;
    }
    // copy constructor
    Student(Student &s) {
        name = s.name;
        age = s.age;
        roll = s.roll;
        count++;
    }
    // destructor
    ~Student() {
        cout << "Destructor called for " << name;
        cout << "(Object Count : " << --count << ")" << endl;
    }
    void display() {
        cout << "Name :\t" << name << endl;
        cout << "Age :\t" << age << endl;
        cout << "Roll :\t" << roll << endl;
        cout << "Count :\t" << count << endl << endl;
    }
};

int Student::count = 0;

int main(void) {
    Student s; // default constructor
    s.name = "Rabbit";
    s.age = 20;
    s.roll = 1;
    Student s1("John", 20, 2); // parametric constructor called
    Student s2(s1);            // copy constructor called
    s.display();
    s1.display();
    s2.display();
    return 0;
}