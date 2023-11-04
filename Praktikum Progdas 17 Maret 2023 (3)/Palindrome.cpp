#include <iostream>
using namespace std;

int main()
{
    int n, digit, num, rev = 0;
    cout << "Enter a number : ";
    cin >> num;
    n = num;
    do 
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while (num != 0);

    cout << "The reverse of this number is : " << rev << endl;
    cout << n << endl;
    if (rev == n)
        cout << "Palindrome";
    else 
        cout << "Non-palindrome";
        
    return 0;
}