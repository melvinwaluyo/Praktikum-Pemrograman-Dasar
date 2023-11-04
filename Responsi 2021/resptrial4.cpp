#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string NIM;
    cout << "Enter NIM";
    cin >> NIM;

    string year = NIM.substr(0,2);
    string NIU = NIM.substr(3,6);
    string fak = NIM.substr(10,2);
    string NIF = NIM.substr(13,5);

    cout << "Angkatan : 20" << year << endl;
    cout << "NIU : " << NIU << endl;
    cout << "Kode Fak : " << fak << endl;
    cout << "NIF : " << NIF << endl;

    return 0;
}