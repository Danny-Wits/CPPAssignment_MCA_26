// Single Level Inheritance
// Write a program to demonstrate single level inheritance in C++
#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;
    void details()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meow" << endl;
    }
};

int main()
{
    Cat c1;
    c1.name = "Tom";
    c1.age = 2;
    c1.details();
    c1.meow();

    return 0;
}