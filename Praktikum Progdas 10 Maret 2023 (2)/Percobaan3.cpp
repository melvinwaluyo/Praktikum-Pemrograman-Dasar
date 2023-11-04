#include <iostream>
using namespace std;

int main()
{
    int Bil1, Bil2;

    cout << "Bilangan pertama : ";
    cin >> Bil1;
    cout << "Bilangan kedua : ";
    cin >> Bil2;
    cout << "Hubungan kedua bilangan : ";
    
    if (Bil1 == Bil2)
        cout << Bil1 << "=" << Bil2;
    else if (Bil1 > Bil2)
        cout << Bil1 << ">" << Bil2;
    else   
        cout << Bil1 << "<" << Bil2;

    return 0;
}