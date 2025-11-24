// Structure
#include <iostream>
using namespace std;
struct Person
{
    char name[20];
    int age;
};

void show_details(Person p)
{
    cout << p.name << "'s age is " << p.age << endl;
}

int main()
{
    Person people[3];
    for (int i = 0; i < 3; i++)
    {
        Person p;
        cout << "Enter name: ";
        cin >> p.name;
        cout << "Enter age: ";
        cin >> p.age;
        people[i] = p;
    }

    for (Person p : people)
    {
        show_details(p);
    }

    return 0;
}