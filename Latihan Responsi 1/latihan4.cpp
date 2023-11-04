#include <iostream>
#include <string>
using namespace std;

int main()
{
    string NIM, tahun, NIU, fakultas, NIF;
    cout << "Masukkan NIM : "; // 22/492978/TK/53972
    cin >> NIM;
    tahun = NIM.substr(0,2);
    NIU = NIM.substr(3,6);
    fakultas = NIM.substr(10,2);
    NIF = NIM.substr(13,5);

    cout << "tahun : " << tahun << endl;
    cout << "NIU : " << NIU << endl;
    cout << "Fakultas : " << fakultas << endl;
    cout << "NIF : " << NIF << endl;

    return 0;
}