#include <iostream>
using namespace std;

const int num = 3;

struct employee {
    string name;
    int emp_no;
    float salary;
};

int main() {
    employee emp[num];

    cout << "Masukkan Data Pegawai" << endl;

    for (int i = 0; i < num; i++) {
        cout << "Pegawai Nomor " << i+1 << endl;
        cout << " Nama: " << endl;
        cin >> emp[i].name;
        cout << " Kode: " << endl;
        cin >> emp[i].emp_no;
        cout << " Gaji: " << endl;
        cin >> emp[i].salary;
    }

    cout << "\n";
    cout << "Data Pegawai \n";
    cout << "No. \tNama\tKode\t\tGaji\n";
    for (int i = 0; i < num; i++) {
        cout << i + 1 << "\t" << emp[i].name << "\t" << emp[i].emp_no << "\t\t" << emp[i].salary << "\n";
    }
    return 0;
}