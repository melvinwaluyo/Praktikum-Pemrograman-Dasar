#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk memasukkan data mahasiswa
void inputData(string &nim, string &nama, float &nilai, int &sks)
{
    cout << "Masukkan NIM: ";
    cin >> nim;

    float total_nilai = 0;
    int total_sks = 0;

    for (int i = 1; i <= 5; i++)
    {
        float nilai_mk;
        int sks_mk;
        string nama_mk;

        cout << "Masukkan nama mata kuliah ke-" << i << ": ";
        cin >> nama_mk;

        cout << "Masukkan nilai mata kuliah ke-" << i << ": ";
        cin >> nilai_mk;

        cout << "Masukkan jumlah sks mata kuliah ke-" << i << ": ";
        cin >> sks_mk;

        total_nilai += nilai_mk * sks_mk;
        total_sks += sks_mk;
    }

    nilai = total_nilai;
    sks = total_sks;
}

// Fungsi untuk menghitung IPK
float hitungIPK(float nilai, int sks)
{
    return nilai / sks;
}

// Fungsi untuk mencetak NIM dan IPK
void cetakData(string nim, float ipk)
{
    cout << "NIM: " << nim << endl;
    cout << "IPK: " << ipk << endl;
}

int main()
{
    string nim;
    string nama;
    float nilai;
    int sks;

    inputData(nim, nama, nilai, sks);
    float ipk = hitungIPK(nilai, sks);
    cetakData(nim, ipk);

    return 0;
}
