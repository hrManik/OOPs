#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "I am " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void monthlySalary()
    {
        cout << "Monthly Salary is " << salary << endl;
    }
};
class Manager : public Employee
{
public:
    string department;
    int num_of_employees;
    Manager(string name, int salary, string department, int num_of_employees)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
        this->num_of_employees = num_of_employees;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
        cout << "Number of Employees: " << num_of_employees << endl;
    }
};

int main()
{
    Manager A1("Mukesh", 75000, "Sales", 10);
    A1.introduce();
}