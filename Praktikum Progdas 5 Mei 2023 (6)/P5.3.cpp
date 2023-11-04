#include <iostream>
using namespace std;

int main()
{
    int s[6][6];
    int i = 0, j;
    cout << "\nMasukkan sks Mahasiswa untuk 6 Angkatan yang berbeda \n";
    while (i < 6)
    {
        j = 0;
        cout << "\n Angkatan 199" << i << "\t";
        while (j < 4)
        {
            cout << "\nsks Mahasiswa [" << i << "] [" << j << "] =  ";
            cin >> s[i][j];
            j++;
        }
        i++;
    }
    cout << endl;
    cout << "\nTampilkan data sks Mahasiswa 6 Angkatan\n";
    cout << "\n Angkatan\t\t" << "sks";
    i = 0;
    while (i < 6)
    {
        j = 0;
        cout << "\n 199" << i << "\t";
        while (j < 4)
        {
            cout << "\t" << s[i][j];
            j++;
        }
        i++;
    }
    cout << endl;
}
