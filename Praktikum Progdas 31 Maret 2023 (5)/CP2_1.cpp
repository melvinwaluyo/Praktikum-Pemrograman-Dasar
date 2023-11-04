#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kode_negara, kode_kota, nomor_telepon;
    string nomor_telpon_lengkap;

    cout << "Masukkan kode negara: ";
    cin >> kode_negara;

    cout << "Masukkan kode kota: ";
    cin >> kode_kota;

    cout << "Masukkan nomor telepon: ";
    cin >> nomor_telepon;

    nomor_telpon_lengkap = kode_negara  + kode_kota  + nomor_telepon;

    cout << "Nomor telepon lengkap: " << nomor_telpon_lengkap << endl;

    nomor_telpon_lengkap.erase(0, kode_negara.length() );
    nomor_telpon_lengkap.erase(0, kode_kota.length() );

    cout << "Nomor telepon tanpa kode negara dan kode kota: " << nomor_telpon_lengkap << endl;

    return 0;
}
