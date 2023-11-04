#include <iostream>
using namespace std;

int main()
{
    int prate, rhrate;

    cout << "Take your resting pulse for 10 seconds.\n";
    cout << "Enter your pulse rate and press return> ";
    cin >> prate;
    rhrate = prate * 6;
    cout << "Your resting heart rate is " << rhrate << "."<< endl;

    if (rhrate < 60)
        cout << "Your heart is in excellent health!";
    else 
        cout << "Keep up your exercise program!";

    return 0;
}