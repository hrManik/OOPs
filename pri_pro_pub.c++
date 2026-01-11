#include <iostream>
using namespace std;

class Human
{
public:
  string name;
  int age, weight;
};

class Student : public Human
{
    int roll_number,fees;
};
int main()
{
    Student A;
    A.name ="Manikanta";
}