#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age, roll_no;
    string grade;
    // functions to set and get private members can be added here if needed
public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setRollNo(int r)
    {
        roll_no = r;
    }
    void setGrade(string g)
    {
        grade = g;
    }

    void getInfo()
    {
        cout << "Name: " << name << ", Age: " << age << ", Roll No: " << roll_no << endl;
    }
    string getGrade(int pin)
    {
        if (pin == 120820)
        {
            return grade;
        }
        else
        {
            return "Access Denied";
        }
    };
};

int main()
{
    student s1, s2;
    s1.setName("Alice");
    s1.setAge(20);
    s1.setRollNo(101);
    s1.setGrade("A");
    s2.setName("Bob");
    s2.setAge(21);
    s2.setRollNo(102);
    s2.setGrade("B");
    s1.getInfo();
    cout << s1.getGrade(120820) << endl;
    s2.getInfo();
    cout << s2.getGrade(123456) << endl;
}