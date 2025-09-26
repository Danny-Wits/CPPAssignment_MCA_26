#include <iostream>
using namespace std;
void print(int ar[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ar[i][j] << "|";
        }
        cout << endl;
    }
}
void sum(int ar1[][3], int ar2[][3])
{
    int result[3][3];
    int range = 9;
    for (int i = 0; i < 9; i++)
    {
        result[i / 3][i % 3] = ar1[i / 3][i % 3] + ar2[i / 3][i % 3];
    }
    print(result);
}

int main()
{

    int ar1[3][3] = {{1, 2, 3}, {2, 3, 4}, {4, 5, 6}};
    int ar2[3][3] = {{3, 2, 1}, {4, 3, 2}, {6, 5, 4}};
    sum(ar1, ar2);
    return 0;
}