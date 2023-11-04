#include <iostream>
using namespace std;

struct 
{
    int roll, age;
    string name;
}vr[4];

int main()
{
    int i, j, k, max;
    for (i = 0; i < 4; i++)
    {
        cout << "Enter " << i + 1 << " Student Record\n";
        cout << "Enter Roll no: " << endl;
        cin >> vr[i].roll;
        cout << "Enter age : " << endl;
        cin >> vr[i].age;
        cout << "Enter Name : " << endl;
        cin >> vr[i].name;
    }
    cout << endl;
    for (j = 0; j < 4; j++)
    {
        cout << "\nDisplay " << j+ 1 << " Student Record";
        cout << "\nRoll no. : " << vr[j].age;
        cout << "\nName : " << vr[j].name << endl; 
    }
    max = vr[0].age;
    int tag;
    for (k = 1; k < 4; k++)
    {
        if (max < vr[k].age)
            max = vr[k].age;
            tag = k;
    }
    cout << "\nThe oldest student is : " <<  vr[tag].name << "," << max << " years old";
    return 0;
}