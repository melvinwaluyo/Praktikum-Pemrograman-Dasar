#include <iostream>
using namespace std;

int main() {
    int A[5][5], i , j , k, l;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        A[i][j] = i + 100;
    }
    cout << "Indeks\t\t" << "Nilai Elemen\t\t\t" << "Alamat" << endl;

    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 5; l++)
        cout << "[" << k << "]" << "[" << l << "]" << "\t\t" << A[k][l] << "\t\t\t\t" << &A[k][l] << endl;
    }
}