#include <iostream>
using namespace std;

void even_fliter(int arr[], int size)
{
    cout << "Even numbers are : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ",";
        }
    }
    cout << "\n-----------------\n";
}
void odd_fliter(int arr[], int size)
{
    cout << "Odd numbers are : ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2)
        {
            cout << arr[i] << ",";
        }
    }
    cout << "\n-----------------\n";
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    even_fliter(arr, 10);
    odd_fliter(arr, 10);
    return 0;
}