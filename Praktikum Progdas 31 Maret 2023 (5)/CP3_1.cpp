#include <iostream>
#include <string>
using namespace std;

int main()
{
    string NIM;
    cout << "Masuklkan NIM : ";
    cin >> NIM;
    cout << "Angkatan : " << NIM.substr(0,2) << endl;
    cout << "NIU : " << NIM.substr(3,6) << endl;
    cout << "Kode Fakultas : " << NIM.substr(10,2) << endl;
    cout << "NIF : " << NIM.substr(13,5) << endl;
    return 0;
}