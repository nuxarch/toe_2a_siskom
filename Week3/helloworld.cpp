/*
tugas week 3:
tugas 1:
Buatlah program untuk menghitung umur suatu kendaraan
dari input tanggal sekarang
contoh:
masukkan tahun produksi : 1990
masukkan tahun sekarang : 2024
umur kendaraan anda adalah : 34 tahun

tugas 2:
Buatlah program yang bisa mengetahui bahwa sebuah bilangan itu
adalah ganjil atau genap
contoh:
masukkan angka anda : 1
angka ganjil

tugas 3:
Buatlah program untuk menampilkan informas kendaraan berdasar merek
contoh:
masukkan brand motor anda : honda
warna motor : kuning
kapasitas mesin : 150 cc
kapasitas bahan bakar : 30 l
jenis rangka: eshaft
jenis motor : sport
 */

/*
program : program menampilkan pesan
dibuat oleh : fatkhur_rohman@polinema.ac.id
tgl :
*/
// pustaka berkaitan dg io stream
#include <iostream>

// pustaka iostream yg std
using namespace std;

// function main
int suhu = 100, kelembapan, intensitas = 1000;
double Suhu = 100.5;
char _suhu = '1';
string suhu_ = "101";
bool suhu__ = true;
// const double PHI = 3.14;

double angka1, angka2, jumlah;
int main(void)
{
    // print out pesan
    // suhu = kelembapan = 12;
    // cout << "isi variabel suhu:" << suhu << endl;
    // cout << "isi variabel Suhu:" << Suhu << endl;
    // cout << "isi variabel _suhu:" << _suhu << endl;
    // cout << "isi variabel suhu_:" << suhu_ << endl;
    // cout << "isi variabel suhu__:" << suhu__ << endl;
    // cout << "isi variabel PHI:" << PHI << endl;

    // Suhu = suhu + Suhu;
    // Suhu = PHI + 0.1;
    // cout << "isi variabel Suhu setelah dirubah:" << Suhu << endl;

    // diulangi selamanya
    // while (1)
    // {
    //     cout << "masukkan angka ke-1:";
    //     cin >> angka1;
    //     cout << "masukkan angka ke-2:";
    //     cin >> angka2;
    //     jumlah = (angka1 + angka2) * 10e2;
    //     cout << "hasil penjumlahan angka " << angka1 << ", dan angka " << angka2 << " adalah : " << jumlah << endl;
    // }
    // char a = 'a', b = 66, c = 'C';
    // cout << a << ", " << b << ", " << c << endl;

    // string a = "test";
    // string b = "123";
    // string c = a.append(b);
    // cout << c;

    // string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the txt string is: " << txt.length() << endl;
    // cout << "The size of the txt string is: " << txt.size() << endl;

    // cout << "hello \"1\" test \n ";
    // cout << "hello \"1\" test " << endl;

    // cout << "hello \"1\" world \t ";
    // cout << "hello \"1\" world ";

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;
    // int c = a % b;
    // c++;
    // ++c;
    // c += 1; // c = c+1
    // cout << ((a >= 2) || (a < 3)) << endl;
    // c--;
    // --c;
    // cout << (b < a) << endl;

    return 0;
}
