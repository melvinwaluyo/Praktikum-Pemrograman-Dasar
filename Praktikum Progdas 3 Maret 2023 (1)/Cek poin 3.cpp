#include <iostream>
#define pi 3.14
using namespace std;

int main()
{
    double rTabung, tTabung, vTabung, rKerucut, tKerucut, vKerucut;
    cout << "Masukkan jari-jari tabung : ";
    cin >> rTabung;
    cout << "Masukkan tinggi tabung : ";
    cin >> tTabung;
    cout << "Masukkan jari-jari kerucut : ";
    cin >> rKerucut;
    cout << "Masukkan tinggi kerucut : ";
    cin >> tKerucut;

    vTabung = pi * rTabung * rTabung * tTabung;
    vKerucut = (pi * rKerucut * rKerucut * tKerucut) / 3;

    cout << "Volume tabung adalah : " << vTabung << endl;
    cout << "Volume kerucut adalah : " << vKerucut;

    return 0;
}