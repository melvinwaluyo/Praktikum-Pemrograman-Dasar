#include <iostream>
using namespace std;

int main() {
    int A[5][5], i = 0, j = 0, k = 0, l = 0;

    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            A[i][j] = i + 100;
            j++;
        }
        i++;
    }

    cout << "Indeks\t\t" << "Nilai Elemen\t\t\t" << "Alamat" << endl;

    while (k < 5)
    {
        l = 0;
        while (l < 5)
        {
            cout << "[" << k << "]" << "[" << l << "]" << "\t\t" << A[k][l] << "\t\t\t\t" << &A[k][l] << endl;
            l++;
        }
        k++;
    }

    return 0;
}
