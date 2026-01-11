#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int account_number;
    int balance;
    Customer()
    {
        name = "Unknown";
        account_number = 0;
        balance = 0;
    }
    Customer(string n, int acc_no, int bal)
    {
        name = n;
        account_number = acc_no;
        balance = bal;
    }
    Customer(string n, int acc_no)
    {
        name = n;
        account_number = acc_no;
        balance = 0;
    }
    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }

    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    Customer A2("Rohit", 25, 10000);
    Customer A3("Sonia", 22);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    Customer A5;
    A5 = A3;
    A5.display();
}