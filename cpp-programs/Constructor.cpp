// Constructor
#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string n, int a)
    {
        cout << "Constructor called" << endl;
        name = n;
        age = a;
    }
    void introduce()
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
    }
};

int main()
{

    Person p1("John", 20); // constructor called
    p1.introduce();
    return 0;
}