#include <iostream>
using namespace std;

class Engineer
{
public:
    string specialization;
    Engineer(){
        cout<<"Engineer constructor called"<<endl;
    }

    void work()
    {
        cout << "i have specialization in " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscribers;
    Youtuber(){
        cout<<"Youtuber constructor called"<<endl;
    }
    void contentcreator()
    {
        cout << "i have " << subscribers << " subscribers" << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    string name;

    CodeTeacher(){
        cout<<"CodeTeacher constructor called"<<endl;
    }

    CodeTeacher(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        work();
        contentcreator();
    }
};

int main()
{
    CodeTeacher A1("Manikanta", "C++", 1000);
    A1.display();
}