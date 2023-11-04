#include <iostream>
#define pi 3.14
using namespace std;

int main()
{
    double r, luas_lingkaran;
    cout << "Masukkan jari-jari : ";
    cin >> r;
    luas_lingkaran = pi * r * r;
    cout << "Luas lingkaran adalah : " << luas_lingkaran;

    return 0;
}