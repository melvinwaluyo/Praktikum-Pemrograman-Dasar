#include <iostream>
using namespace std;

int main()
{
    double *pcel, *pfah, fah, cel;
    pcel = &cel;
    pfah = &fah;

    cout << "Masukkan suhu dalam Fahrenheit : ";
    cin >> fah;
    *pcel = (*pfah - 32) * 5/9;
    cout << "Suhu dalam celcius adalah : " << cel << endl;

    return 0;
}