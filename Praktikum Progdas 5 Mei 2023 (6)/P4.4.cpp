#include <iostream>
using namespace std;

int main() {
    int A[5][5], i = 0, j = 0, k = 0, l = 0;

    do {
        j = 0;
        do {
            A[i][j] = i + 100;
            j++;
        } while (j < 5);
        i++;
    } while (i < 5);

    cout << "Indeks\t\t" << "Nilai Elemen\t\t\t" << "Alamat" << endl;

    do {
        l = 0;
        do {
            cout << "[" << k << "]" << "[" << l << "]" << "\t\t" << A[k][l] << "\t\t\t\t" << &A[k][l] << endl;
            l++;
        } while (l < 5);
        k++;
    } while (k < 5);

    return 0;
}
