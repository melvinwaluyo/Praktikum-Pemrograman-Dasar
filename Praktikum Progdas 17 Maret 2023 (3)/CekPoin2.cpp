#include <iostream>
using namespace std;

int main()
{
    int n, x, y, num = 1;
    cout << "Input the number of rows : ";
    cin >> n;
    x = 1, y = 1;

    while (x <= n)
    {
        while (y <= n)
        {
            cout << num << endl;
            num++, y++;
        }
        cout << "\n";
        x++;
    }
    return 0;
}