#include <iostream>
using namespace std;


void add_print(int, int);

int main()
{
    int a = 4;
    int b = 5;
    cout << "Fungsi untuk mencetak hasil penambahan dua bilangan" << endl;
    add_print(a, b);

    return 0;
}

void add_print(int val1, int val2) {
    int c;
    cout << "Dua Bilangan yang akan dijumlahkan adalah : " << val1 << " dan " << val2 << endl;
    c = val1 + val2;
    cout << "Hasil penjumlahannya adalah : " << c << endl;
}