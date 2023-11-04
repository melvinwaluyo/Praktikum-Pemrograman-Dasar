#include <iostream>
using namespace std;

int main()
{ int first_number, second_number, result;
cout << "first number ";
cin >> first_number;
cout << "second one ";
cin >> second_number;

result = first_number++ * second_number++;
cout << "hasil =" << result << endl;

return 0;
}