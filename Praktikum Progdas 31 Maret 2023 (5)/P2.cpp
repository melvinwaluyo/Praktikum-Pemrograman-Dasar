 #include <iostream>
 #include <stdlib.h>>
 using namespace std;

 int main()
 {
    char angka[5];
    int a;
    cout << "Masukkan karakter angka  = " << endl;
    cin.get(angka, 5);
    a = atoi(angka);
    cout << "Angka dalam tipe character = " << angka << endl;
    cout << "Angka dalam tipe integer = " << a << endl;
    return 0;
 }