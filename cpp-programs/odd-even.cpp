#include <iostream>
using namespace std;
bool isEven(int x)
{
    return x % 2 == 0;
}

int main()
{

    int x;
    cout << "Enter the number here : ";
    cin >> x;
    cout << x << " is " << (isEven(x) ? "even" : "odd");
    cout << endl;
    main();
    return 0;
}