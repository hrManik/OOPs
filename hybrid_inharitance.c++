#include <iostream>
using namespace std;

class Male
{
public:
    void maleprint()
    {
        cout << "This is male class" << endl;
    }
};
class female
{
public:
    void femaleprint()
    {
        cout << "This is female class" << endl;
    }
};

class student
{
public:
    void print()
    {
        cout << "This is student class" << endl;
    }
};

class boy : public student, public Male
{
public:
    void boyprint()
    {
        cout << "This is boy class" << endl;
    }
};

class girl : public student, public female
{
public:
    void girlprint()
    {
        cout << "This is girl class" << endl;
    }
};

int main()
{
    girl A1;
    A1.print();
    boy A2;
    A2.maleprint();
}