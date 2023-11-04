#include <iostream>
using namespace std;

double addArray(double[]);
double avg(double sum, int n);

int main()
{
    double arr[3];
    double num, sum, average;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a Number: ";
        cin >> num;
        arr[i] = num;
    }
    

    sum = addArray(arr);

    average = avg(sum, 3);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

double addArray(double arr[])
{
    double result = 0;
    
    for (int i = 0; i < 3; i++)
    {
        result += arr[i];
    }

    return result;
}

double avg(double sum, int n)
{
    return sum / n;
}