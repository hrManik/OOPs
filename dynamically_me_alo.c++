#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;    
    int roll_no;
    string grade;
};

int main()
{
    Student *s = new Student();
    (*s).name = "Alice";
    (*s).age = 20;
    (*s).roll_no = 101;
    (*s).grade = "A";
    cout << "Name: " << (*s).name << ", Age: " << (*s).age << ", Roll No: " << (*s).roll_no << endl;
    cout << "Grade: " << (*s).grade << endl;
    delete s;
    return 0;
}