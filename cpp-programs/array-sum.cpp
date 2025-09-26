#include <iostream>
#include "arrayprint.h"
using namespace std;
int sum(int ar[], int size)
{
    int sm = 0;
    for (int i = 0; i < size; i++)
    {
        sm += ar[i];
    }
    return sm;
}
int main()
{
    // array input
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    cout << "Sum of the elements of the array : " << sum(arr, n);
    return 0;
}