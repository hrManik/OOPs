#include <iostream>
using namespace std;
class Customer
{
    string name;
    int *data;

public:
    Customer(string name)
    {
        this->name = name;
        cout << "Constructor name is " << name << endl;
    }
    // destractor
    ~Customer()
    {
        delete data;
        cout << "Destructor name is " << name << endl;
    }
};

int main()
{
    Customer A1("H.R."), A2("Omama"), A3("Manik");
}