#include <iostream>
using namespace std;
int bulan;
string nama_bulan = "";
int main(void)
{
    bulan = 12;
    switch (bulan)
    {
    case 1:
        nama_bulan = "Jan";
        break;
    case 2:
        nama_bulan = "Feb";
        break;
    case 3:
        nama_bulan = "Mar";
        break;
    case 4:
        nama_bulan = "Apr";
        break;
    case 5:
        nama_bulan = "May";
        break;
    case 6:
        nama_bulan = "Jun";
        break;
    case 7:
        nama_bulan = "Jul";
        break;
    case 8:
        nama_bulan = "Aug";
        break;
    case 9:
        nama_bulan = "Sep";
        break;
    case 10:
        nama_bulan = "Okt";
        break;
    case 11:
        nama_bulan = "Nop";
        break;
    case 12:
        nama_bulan = "Dec";
        break;
    }
    cout << "sekarang bulan :" << nama_bulan << endl;
}
