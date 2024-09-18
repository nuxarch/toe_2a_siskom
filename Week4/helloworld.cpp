#include <iostream>
#include <cmath>
using namespace std;
int a = 12;
int b = 10;
int hasil;
int main(void)
{
    hasil = max(a, b);
    cout << "nilai terbesar :" << hasil << endl;
    hasil = min(a, b);
    cout << "nilai terkecil :" << hasil << endl;

    double x = 100;
    cout << "akar dari " << x << ": " << sqrt(x) << endl;
    double y = 4.67;
    cout << "pembulatan dari " << y << ": " << round(y) << endl;
    double z = 10;
    cout << "log dari " << z << ": " << log10(z) << endl;
    z = 4;
    cout << "log dari " << z << ": " << log2(z) << endl;

    double sudut = 90;
    double radians = sudut * (3.14 / 180);
    cout << "sinus(" << sudut << ") : " << sin(radians) << endl;
}
