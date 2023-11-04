#include <iostream>
int main()
{
    int n1 = 1;
    int n2 = ++n1;
    int n3 = ++ ++n1;
    int n4 = n1++;
    std::cout << "n1 = " << n1 << '\n'
    << "n2 = " << n2 << '\n'
    << "n3 = " << n3 << '\n'
    << "n4 = " << n4 << '\n';
}