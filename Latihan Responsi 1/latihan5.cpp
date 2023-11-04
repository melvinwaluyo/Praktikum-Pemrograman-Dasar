#include <iostream>
#include <cmath>
using namespace std;

int cariLuas(int panjang, int tinggi)
{
    double luas;
    luas = (panjang * tinggi) / 2;
    return luas;
}

int main()
{
    double panjang, tinggi, miring, luas;
    cout << "Masukkan panjang alas : ";
    cin >> panjang;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    miring = sqrt(pow(panjang,2) + pow(tinggi,2));
    cout << "Panjang sisi miring : " << miring << endl;
    luas = cariLuas(panjang,tinggi);
    cout << "Luas segitiga : " << luas;

    return 0;
}