#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Engineer : public virtual Human
{
public:
    string specialization;

    void work()
    {
        cout << "i have specialization in " << specialization << endl;
    }
};

class Youtuber : public virtual Human
{
public:
    int subscribers;

    void contentcreator()
    {
        cout << "i have " << subscribers << " subscribers" << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    int salary;

    CodeTeacher(string name, string specialization, int subscribers, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main()
{
    CodeTeacher A1("Manikanta", "C++", 1000, 75000);
    A1.display();
}