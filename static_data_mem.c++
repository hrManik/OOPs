#include <iostream>
using namespace std;

class Custiomer
{
    string name;
    int account_number;
    int balance;
    static int total_customers;
    static int total_balance;
    

public:
    Custiomer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customers++;
        total_balance += balance;
    }

    static void acceStatic(){
        cout<<"total numer of customer  "<<total_customers<<endl;
        cout<<"total balance  "<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }   

    void display()
    {
        cout << "Name: " << name << ", Account Number: " << account_number << ", Balance: " << balance << endl;
        cout << "Total Customers: " << total_customers << endl;
    }
};

int Custiomer::total_customers = 0;
int Custiomer::total_balance = 0;

int main()
{

    Custiomer A1("Rohit", 25, 10000);
    Custiomer A2("Sonia", 22, 5000);
    
    A1.display();
    A1.deposit(2000);
    A1.display();
    A2.withdraw(1000);
    A2.display();
    Custiomer :: acceStatic();
    
}