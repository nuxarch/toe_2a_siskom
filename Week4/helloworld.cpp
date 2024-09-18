#include <iostream>
using namespace std;
int main(void)
{
    int i = 9;
    while (i > 8)
    {
        cout << "looping ke : " << i << endl;
        --i;
        // if (i == 0){
        //     break;
        // }
    }
    cout << "selesai" << endl;

    int j = 0;
    do
    {
        j+=2;
        cout << "looping ke :" << j << endl;
    } while (j < 10);
}
