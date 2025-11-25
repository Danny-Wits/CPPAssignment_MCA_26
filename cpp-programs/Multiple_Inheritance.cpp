// Multiple Inheritance
// Program that demonstrates multiple inheritance in C++
#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    Human(int age) : age(age) {}
    virtual void introduce()
    {
        cout << "Age is " << age << endl;
    }
};
class Employee
{
public:
    string name;
    float salary;
    string company;

    Employee(string name, float salary, string company)
        : name(name), salary(salary), company(company) {}
    void introduce()
    {
        cout << "Name is " << name << endl;
        cout << "Salary is " << salary << endl;
        cout << "Company is " << company << endl;
    }
};
class Engineer : public Human, public Employee
{
public:
    int experience;
    Engineer(string name, int age, float salary, string company, int experience)
        : Human(age), Employee(name, salary, company)
    {
        this->experience = experience;
    }
    void introduce() override
    {
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
        cout << "Salary is " << salary << endl;
        cout << "Company is " << company << endl;
        cout << "Experience is " << experience << endl;
    }
};

int main()
{
    Engineer s1("Danny", 20, 100000, "Google", 5);
    s1.introduce();
    return 0;
}