#include <iostream>
using namespace std;

int insertArray(int[], int);
int accessArray(int[], int);
int searchArray(int[], int, int); 
int main()
{
    int n, k, l, insert, access, ans = 1;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    insert = insertArray (arr, n);

    cout << "Acessing element at index. Enter the index : ";
    cin >> l;
    if(l < 0 || l >= n) {
        cout << "Error: index out of range" << endl;
        return 0;
    }

    access = accessArray(arr, l);
    cout << endl;
    cout << "\nElement present at index " << l << " is " << access << endl;

    cout << "Enter element to be searched : " << endl;
    cin >> k;
    ans = searchArray(arr, n, k);
    if (ans != l)
        cout << "The element " << k << " is present at index " << ans;
    else
        cout << "The element " << k << " is not there in the array";
    return 0;
}

int insertArray(int arr[], int n)
{
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return *arr;
}

int accessArray(int arr[], int l)
{
    return arr[l];
}

int searchArray(int arr[], int n, int k)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            ans = i;
            break;
        }
    }
    return ans;
}