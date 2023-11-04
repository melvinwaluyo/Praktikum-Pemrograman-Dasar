#include <iostream>
#define pi 3.14
#include <cmath>

using namespace std;

// Fungsi untuk memasukkan data bola
void inputData(double &d)
{
    cout << "Masukkan diameter bola (cm): ";
    cin >> d;
}

// Fungsi untuk menghitung luas permukaan bola dan volume bola
void hitungBola(double d, double &luasP, double &vol)
{
    double r = d / 2;

    luasP = 4 * pi *pow(r,2);
    vol = (4 / 3 )* pi *pow(r,3);
}

// Fungsi untuk mencetak data bola
void cetakData(double d, double &luasP, double &vol)
{
    cout << "Diameter bola: " << d << " cm" << endl;
    cout << "Luas permukaan bola: " << luasP << " cm^2" << endl;
    cout << "Volume bola: " << vol << " cm^3" << endl;
}

int main()
{
    double diameter, luasPermukaan, volume;

    inputData(diameter);
    hitungBola(diameter, luasPermukaan, volume);
    cetakData(diameter, luasPermukaan, volume);

    return 0;
}
