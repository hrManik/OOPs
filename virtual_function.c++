#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak() = 0; //pure virtual function (Abstract class ,no object can create)


    //{
      //  cout << "hu hu" << endl;  //no need to use it in pure virtual sunction .
    //}
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "bark" << endl;
    }
};
class Cat : public Animal
{
public:
    void speak()
    {
        cout << "meow" << endl;
    }
};

int main()
{
    Animal *p;
    vector<Animal *> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cat());

    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }
}