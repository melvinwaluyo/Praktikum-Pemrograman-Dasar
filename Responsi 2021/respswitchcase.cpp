#include <iostream>
using namespace std;

int main()
{ int angka;

cout << "ketik angka dari 1-4";
cin >> angka;

switch(angka)
{
case 1:
    cout << "satu";
    break;
case 2:
    cout << "dua";
    break;
case 3:
    cout << "tiga";
    break;
case 4:
    cout << "empat";
    break;
default:
cout << "salah woi" << endl;
break;
}
return 0;
}