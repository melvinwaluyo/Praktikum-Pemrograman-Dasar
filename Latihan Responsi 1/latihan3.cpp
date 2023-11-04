#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    char nama[40];
    int NIU;
    int umur;
    int nilai[4];
};

int main()
{
    mahasiswa siswa1;
    cout << "Masukkan nama : ";
    cin.get(siswa1.nama,40);
    cout << "Masukkan NIU : ";
    cin >> siswa1.NIU;
    cout << "Masukkan umur : ";
    cin >> siswa1.umur;
    cout << "Masukkan nilai : " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Pelajaran " << i+1 << " : ";
        cin >> siswa1.nilai[i];
    }

    cout << "\nNama : " << siswa1.nama << endl;
    cout << "Umur : " << siswa1.umur << endl;
    cout << "NIU : " << siswa1.NIU << endl;
    cout << "Nilai : " << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << "Pelajaran " << i << endl;
        cout << siswa1.nilai[i] << endl;
    }

    return 0;
}