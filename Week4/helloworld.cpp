#include <iostream>
using namespace std;
struct motor
{
    string merk;
    int tahun;
    double kapasitasmesin;
    double tenagamaks;
    string kategori;
    int kapasitasbahanbakar;
    string warna;
};

motor motor1, motor2;
int main(void)
{
    motor1.merk = "Honda";
    motor1.tahun = 1990;
    motor1.kapasitasmesin = 150;
    motor1.tenagamaks = 10;
    motor1.kategori = "Sport";
    motor1.kapasitasbahanbakar = 5;
    motor1.warna = "Merah";
    cout << "Info Motor 1" << motor1.merk << ",\t" << motor1.tahun << ",\t" << motor1.kapasitasmesin << ",\t"
         << motor1.tenagamaks << ",\t" << motor1.kategori
         << ",\t" << motor1.kapasitasbahanbakar << ",\t" << motor1.warna << endl;

    motor2 = motor1;
    motor2.merk = "Yamaha";
    cout << "Info Motor 2" << motor2.merk << ",\t" << motor2.tahun << ",\t" << motor2.kapasitasmesin << ",\t"
         << motor2.tenagamaks << ",\t" << motor2.kategori
         << ",\t" << motor2.kapasitasbahanbakar << ",\t" << motor2.warna << endl;
    return 0;
}
