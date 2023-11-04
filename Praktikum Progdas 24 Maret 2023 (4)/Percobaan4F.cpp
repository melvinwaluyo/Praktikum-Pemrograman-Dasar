#include <iostream>
using namespace std;

struct Mahasiswa
{
    char nama[40];
    int angkatan;
};

int main()
{
    //mhs;
    cout << "Masukkan Nama Mahasiswa : ";
    //cin.get(nama, 20);
    cout << "Masukkan Angkatan : ";
    //cin >> angkatan;

    cout << "Data Mahasiswa" << endl;
    //cout << "Nama : " << mhs.nama << endl;
    //cout << "Angkatan : " << mhs.angkatan << endl;

    return 0;
}