#include <iostream>
using namespace std;

int double_elements(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i] * 2;
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    cout << "Before the Call\n";
    for (int e : arr)
    {
        cout << e << ",";
    }
    double_elements(arr, 3);

    cout << "\nAfter the Call\n";
    // the array is modified here too
    for (int e : arr)
    {
        cout << e << ",";
    }
    return 0;
}
