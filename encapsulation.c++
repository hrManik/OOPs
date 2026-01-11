#include <iostream>
using namespace std;

class Custiomer
{
    string name;
    int account_number;
    int balance, age;
    static int total_customers;
    static int total_balance;

public:
    Custiomer(string name, int account_number, int balance, int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
        total_customers++;
        total_balance += balance;
    }

    static void acceStatic()
    {
        cout << "total numer of customer  " << total_customers << endl;
        cout << "total balance  " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
        else
        {
            cout << "Invalid deposit amount: " << amount << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
        else
        {
            cout << "Invalid withdraw amount: " << amount << endl;
        }
    }
    void updateAge(int newAge)
    {
        if (newAge >= 0)
        {
            age = newAge;
        }
        else
        {
            cout << "Invalid age: " << newAge << endl;
        }
    }
    void display()
    {
        cout << name << ", " << account_number << ", " << balance << " " << age << endl;
    }
};

int Custiomer::total_customers = 0;
int Custiomer::total_balance = 0;

int main()
{

    Custiomer A1("Rohit", 25, 10000, 60);
    Custiomer A2("Sonia", 22, 5000, 77);
    Custiomer A3("Manik", 30, 7000, 70);
    A1.updateAge(-7);
    A1.deposit(-700);
    A3.display();
}