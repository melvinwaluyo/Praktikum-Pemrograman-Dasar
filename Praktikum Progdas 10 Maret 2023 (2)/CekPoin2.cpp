#include <iostream>
#define pi 3.14
using namespace std;

int main()
{
    double rKubus, pBalok, lBalok, tBalok, rTabung, tTabung, vKubus, vBalok, vTabung;
    int bangun;
    cout << "Program untuk menghitung volume bangun ruang" << endl;
    cout << " 1=Kubus 2=Balok 3=Tabung\n";
    cout << "Pilih bangun : ";
    cin >> bangun;
    switch (bangun)
    {
        case 1:
        cout << "Program untuk menghitung volume kubus" << endl;
        cout << "Masukkan panjang rusuk : ";
        cin >> rKubus;
        vKubus = rKubus * rKubus;
        cout << "Volume kubus adalah : " << vKubus << endl;
        break;

        case 2:
        cout << "Program untuk menghitung volume balok" << endl;
        cout << "Masukkan panjang balok : ";
        cin >> pBalok;
        cout << "Masukkan kebar balok : ";
        cin >> lBalok;
        cout << "Masukkan tinggi balok : ";
        cin >> tBalok;
        vBalok = pBalok * lBalok * tBalok;
        cout << "Volume balok adalah : " << vBalok << endl;
        break;

        case 3:
        cout << "Program untuk menghitung volume tabung" << endl;
        cout << "Masukkan jari-jari tabung : ";
        cin >> rTabung;
        cout << "Masukkan tinggi tabung : ";
        cin >> tTabung;
        vTabung = pi * rTabung * rTabung * tTabung;
        cout << "Volume tabung adalah : " << vTabung << endl;
        break;

    }
    return 0;
}