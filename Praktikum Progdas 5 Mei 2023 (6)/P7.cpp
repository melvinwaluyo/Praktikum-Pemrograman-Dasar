#include <iostream>
using namespace std;

#define N 10

int main()
{
    int* A = new int[N];

    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    delete[] A;

    return 0;
}