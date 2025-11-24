// Access specifier

#include <iostream>
using namespace std;

class A
{
private:
    int pri;

protected:
    int pro;

public:
    int pub;
    void show()
    {
        cout << "public : " << pub << endl;
        cout << "protected : " << pro << endl;
        cout << "private : " << pri << endl;
    }
};
class B : public A
{
public:
    void modify()
    {
        pub = 1;
        pro = 3;
        // pri = 2; //not accessible
    }
};

int main()
{
    A obj;
    obj.pub = 1;
    // obj.pri = 2; //not accessible
    // obj.pro = 3; //not accessible
    obj.show();

    B obj1;
    obj1.modify();
    obj1.show();
    return 0;
}