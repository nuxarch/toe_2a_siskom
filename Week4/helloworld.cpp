#include <iostream>
using namespace std;
int main(void)
{
    int a = 10;
    int b = 20, c;
    if (a != b)
    {
        c = 1;
    }
    if (a >= b)
    {
        c = 2;
    }
    cout << "var c:" << c << endl;
    a = 1;
    b = 2;
    if (a < b)
    {
        c = 3;
    }
    else
    {
        c = 4;
    }
    cout << "var c:" << c << endl;

    a = 13;
    b = 12;
    if (a < b)
    {
        c = 5;
    }
    else if (a == b)
    {
        c = 6;
    }
    else
    {
        c = 7;
    }
    cout << "var c:" << c << endl;
}
