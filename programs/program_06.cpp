// friend function
#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    static int objCreated;
    int uniqueId;

  public:
    string name;
    int age;
    int roll;
    Student() {
        name = "";
        age = 0;
        roll = 0;
        uniqueId = ++objCreated;
    }
    Student(string name, int age, int roll) {
        this->name = name;
        this->age = age;
        this->roll = roll;
        uniqueId = ++objCreated;
    }
    Student(Student &s) {
        name = s.name;
        age = s.age;
        roll = s.roll;
        uniqueId = ++objCreated;
    }
    void display() {
        cout << "Name\t: " << name << endl;
        cout << "Age\t: " << age << endl;
        cout << "Roll\t: " << roll << endl;
        cout << "ID\t: " << uniqueId << endl << endl;
    }
    friend void updateUniqueID(Student &, int);
};

int Student::objCreated = 0;

void updateUniqueID(Student &s, int id) { s.uniqueId = id; }

int main(void) {
    Student s1("John", 20, 2);
    Student s2("Rabbit", 19, 7);
    s1.display();
    s2.display();
    cout << "Calling friend function to update unique ID of s1\n" << endl;
    updateUniqueID(s1, 5);
    s1.display();
    s2.display();
    return 0;
}