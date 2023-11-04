#include <iostream>
using namespace std;

void lower(int matrix[3][3], int baris, int kolom)
{
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (i < j) {
                cout << 0 << " ";
            }
            else cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void upper(int matrix[3][3], int baris, int kolom)
{
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (i > j) {
                cout << 0 << " ";
            }
            else cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void diagonal(int matrix[3][3], int baris, int kolom)
{
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (i == j) {
                cout << matrix[i][j] << " ";
            }
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int baris = 3, kolom = 3;
    int matrix[3][3];
    cout << "Masukkan matriks awal : " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan indeks " << i << " " << j << " : ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Matriks awal : " << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Bentuk lower triangular : " << endl;
    lower(matrix, baris, kolom);
    cout << "Bentuk upper triangular : " << endl;
    upper(matrix, baris, kolom);
    cout << "Bentuk diagonal : " << endl;
    diagonal(matrix, baris, kolom);

    return 0;
}

