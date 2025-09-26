#include <iostream>
using namespace std;

void table_print(int number)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main()
{
    int i;
    cout << "Enter the number here: ";
    cin >> i;
    table_print(i);
    return 0;
}