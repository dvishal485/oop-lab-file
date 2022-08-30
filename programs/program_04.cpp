#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int roll_number;
    int marks[3];

    float getAverageMarks()
    {
        float average = 0.0;
        for (int i = 0; i < 3; i++)
            average += *(marks + i);
        average /= 3;
        return average;
    }
};

int main(void)
{
    int n;
    cout << "Input number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": " << endl;
        Student s;

        cout << "\tStudent Name : ";
        cin >> s.name;
        cout << "\tStudent Roll Number : ";
        cin >> s.roll_number;
        cout << "\tStudent Marks in three subjects : ";
        for (int i = 0; i < 3; i++)
            cin >> *(s.marks + i);

        cout << endl
             << "\tStudent Details : " << endl;
        cout << "\t\tName : " << s.name << endl;
        cout << "\t\tRoll number : " << s.roll_number << endl;
        cout << "\t\tAverage marks : " << s.getAverageMarks() << endl;
    }
    return 0;
}
