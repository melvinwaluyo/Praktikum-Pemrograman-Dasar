#include <iostream>
using namespace std;

int insertArray(int[], int);
int sortArray(int[]);

int main()
{
    int myarray[5];
    insertArray(myarray, 5);

    cout << "\nInput list is \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << "\t";
    }

    sortArray(myarray);
    cout << "\nOutput list is \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << "\t";
    }

    return 0;
}

int insertArray(int myarray[], int size)
{
    cout << "Enter elements of  array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }

    return *myarray;
}

int sortArray(int myarray[])
{
    for (int k = 1; k < 5; k++)
    {
        int temp = myarray[k];
        int j = k - 1;
        while (j >= 0 && temp <= myarray[j])
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }
    return *myarray;
}
