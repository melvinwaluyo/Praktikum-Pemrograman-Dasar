#include <iostream>
using namespace std;

int main()
{
 int angka;
 cout << "Masukkan angka (1-3) : \n";

 for (int i = 1; i <= 3; i++) 
 {
 	switch(i)
 	{
  	case 1 :
  	cout << "satu" << endl;
 	 break;
  	case 2 :
 	 cout << "dua" << endl;
  	break;
  	case 3 :
  	cout << "tiga" << endl;
  	break;
  	default :
  	cout << "Salah input" << endl;
  	break; 
 	}
 }
  return 0;
}