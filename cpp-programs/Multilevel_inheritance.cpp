// Multilevel inheritance

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
class LandAnimal : public Animal
{
public:
    void walk()
    {
        cout << "Walking" << endl;
    }
};
class Dog : public LandAnimal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};
int main()
{
    Dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;
}