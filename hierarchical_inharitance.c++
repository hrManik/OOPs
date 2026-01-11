#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void work()
    {
        cout << "Human is working" << endl;
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees) : Human(name, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_number << " " << fees << endl;
        cout << "Student is studying" << endl;
    }
};
class Teacher : public Human
{
    int salary;

public:
    Teacher(string name, int age, int salary) : Human(name, age)
    {
        this->salary = salary;
    }

    void display()
    {
        cout << name << " " << age << " " << salary << endl;
        cout << "Teacher is teaching" << endl;
    }
};
int main()
{
    Student A1("Manikanta", 21, 101, 5000);
    A1.display();
    Teacher T1("Mr. Smith", 45, 50000);
    T1.display();
}