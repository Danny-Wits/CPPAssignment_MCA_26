// Class hierarchies :
// Hybrid inheritance and Dimond problem
#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

// using virtual inheritance to avoid diamond problem
class LandAnimal : virtual public Animal
{
public:
    void walk()
    {
        cout << "Walking" << endl;
    }
};
class Mammal : virtual public Animal
{
public:
    void feed()
    {
        cout << "Feeding" << endl;
    }
};

class Cat : public Mammal, public LandAnimal
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
    c1.eat();
    c1.walk();
    c1.feed();
    c1.meow();
    return 0;
}