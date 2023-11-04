#include <iostream>
using namespace std;

typedef struct mahasiswa
{
    char nama[40];
    int angkatan;
}mhs;

typedef struct dosen
{
    char nama[40];
    int umur;
}dsn;

int main()
{
    mhs aku;
    cout << "Masukkan Nama Mahasiswa : ";
    cin.get(aku.nama, 40);
    cout << "Masukkan Angkatan : ";
    cin >> aku.angkatan;

    dsn teknik;
    cout << "\nMasukkan Nama Dosen : ";
    cin >> teknik.nama;
    cout << "Masukkan Umur : ";
    cin >> teknik.umur;

    cout << "\nData Mahasiswa" << endl;
    cout << "Nama : " << aku.nama << endl;
    cout << "Angkatan : " << aku.angkatan << endl;

    cout << "\nData Dosen" << endl;
    cout << "Nama : " << teknik.nama << endl;
    cout << "Umur : " << teknik.umur << endl;

    return 0;
}