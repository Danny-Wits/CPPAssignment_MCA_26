#include <iostream>
using namespace std;
int print(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  |  ";
    }
    cout << endl;
}