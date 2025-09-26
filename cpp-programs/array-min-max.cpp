#include <iostream>
#include "arrayprint.h"
using namespace std;

int min(int[], int);
int max(int[], int);
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

    cout << "Min : " << min(arr, n) << endl;
    cout << "Min : " << max(arr, n);
    return 0;
}
int min(int ar[], int size)
{
    int mn = ar[0];
    for (int i = 0; i < size; i++)
    {
        int c = ar[i];
        mn = (mn > c) ? c : mn;
    }
    return mn;
}
int max(int ar[], int size)
{
    int mx = ar[0];
    for (int i = 0; i < size; i++)
    {
        mx = (mx < ar[i]) ? ar[i] : mx;
    }
    return mx;
}