// Class and object
#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    string name;
    void introduce()
    {
        cout << "Age is " << age << endl;
        cout << "Name is " << name << endl;
    }
};
int main()
{
    Human h1;
    h1.age = 20;
    h1.name = "John";
    h1.introduce();
    return 0;
}