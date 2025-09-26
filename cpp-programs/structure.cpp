#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    void show_details()
    {
        cout << name << "'s age is " << age;
    }
};
int main()
{
    struct Person p;
    p.name = "John";
    p.age = 10;
    p.show_details();
    return 0;
}