#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2, str3, str4, str5;
    int len1, len2, len3, len4, len5;

    cout << "Masukkan 3 kata yang berbeda : " << endl;
    cout << "Masukkan kata pertama : " << endl;
    getline(cin, str1);
    cout << "Masukkan kata kedua : " << endl;
    getline(cin, str2);
    cout << "Masukkan kata ketiga : " << endl;
    getline(cin, str3);

    cout << "Kata pertama : " << str1 << endl;
    cout << "Kata kedua : " << str2 << endl;
    cout << "Kata ketiga : " << str3 << endl;

    // copy of string
    str4 = str1;

    // concatenates string
    str4 = str4.append(str2);
    cout << "Kata keempat : " << str4 << endl;
    str5 = str4 + str3;
    cout << "Kata kelima : " << str5 << endl;

    // copy of substring
    string str6(str5, 0, 8);
    cout << "Kata keenam : " << str6 << endl;

    // size of string
    len1 = str1.size();
    cout << "Ukuran Kata Pertama : " << len1 << endl;
    len2 = str2.size();
    cout << "Ukuran Kata Kedua : " << len2 << endl;
    len3 = str3.size();
    cout << "Ukuran Kata Ketiga : " << len3 << endl;
    len4 = str4.size();
    cout << "Ukuran Kata Keempat : " << len4 << endl;
    len5 = str5.size();
    cout << "Ukuran Kata Kelima : " << len5 << endl;
    return 0;
}