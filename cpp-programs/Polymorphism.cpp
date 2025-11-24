// Polymorphism
#include <iostream>
using namespace std;

class Adder
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
    static double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    cout << Adder::add(1, 2) << endl;
    cout << Adder::add(1, 2, 3) << endl;
    cout << Adder::add(1.0, 2.0) << endl;
    return 0;
}