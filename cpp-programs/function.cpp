#include <iostream>
using namespace std;

int factorial(int n);

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);

    return 0;
}

// Finding factorial using a function
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}