#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    int baris = 3, kolom = 3;
    cout << "Masukkan elemen matriks : " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Untuk index " << i << " " << j << ": ";
            cin >> matrix[i][j]; 
        }
    }

    cout << "\nMatrix awal : " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int max = matrix[0][0];
    int maxbaris = 0, maxkolom = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                maxbaris = i;
                maxkolom = j;
            }
        }
    }

    int min = matrix[0][0];
    int minbaris = 0, minkolom = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0 ; j < baris; j++) {
            if (min > matrix[i][j]) {
                min = matrix[i][j];
                minbaris = i;
                minkolom = j;
            }
        }
    }

    cout << endl;
    cout << "Elemen terbesar adalah : " << max << endl;
    cout << "Terdapat pada baris " << maxbaris + 1 << " & kolom " << maxkolom + 1 << endl;
    cout << "Elemen terkecil adalah : " << min << endl;
    cout << "Terdapat pada baris " << minbaris + 1 << " & kolom " << minkolom + 1 << endl;

    int nobaris;
    cout << "\nMasukkan no baris : ";
    cin >> nobaris;
    nobaris -= 1;
    double hasilbaris = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
           if (i == nobaris)
           {
            cout << matrix[i][j] << " ";
            hasilbaris += matrix[i][j];
           }
        }
    }

    int nokolom;
    cout << "\nMasukkan no kolom : ";
    cin >> nokolom;
    nokolom -= 1;
    double hasilkolom = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
           if (j == nokolom)
           {
            cout << matrix[i][j] << endl;
            hasilkolom += matrix[i][j];
           }
        }
    }

    cout << "Hasil penjumlahan baris ke " << nobaris + 1 << " : " << hasilbaris << endl;
    cout << "Hasil penjumlahan kolom ke " << nokolom + 1 << " : " << hasilkolom << endl;

    return 0;
}