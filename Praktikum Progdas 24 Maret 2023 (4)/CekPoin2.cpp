#include <iostream>
#include <cstring>

using namespace std;

struct jenisBuku
{
    string judul;
    char penulis[40];
    int thTerbit;
    float rating;
} buku1, buku2, buku3, buku4, buku5;

int main()
{
    //buku 1 
    buku1.judul = "C++ Programming";
    strcpy(buku1.penulis, "John");
    buku1.thTerbit = 2009;
    buku1.rating = 8.96;

    //buku 2 
    buku2.judul = "C# Programming";
    strcpy(buku2.penulis, "Joe");
    buku2.thTerbit = 2010;
    buku2.rating = 7.85;

    //buku 3 
    buku3.judul = "Python Programming";
    strcpy(buku3.penulis, "Jack");
    buku3.thTerbit = 2012;
    buku3.rating = 9.12;

    //buku 4 
    buku4.judul = "C Programming";
    strcpy(buku4.penulis, "Jean");
    buku4.thTerbit = 2003;
    buku4.rating = 7.32;

    //buku 5 
    buku5.judul = "Java Programming";
    strcpy(buku5.penulis, "Jane");
    buku5.thTerbit = 2020;
    buku5.rating = 8.54;

    // Print book info
    cout << "Judul Buku 1 : " << buku1.judul << endl;
    cout << "Penulis Buku 1 : " << buku1.penulis << endl;
    cout << "Tahun Terbit Buku 1 : " << buku1.thTerbit << endl;
    cout << "Rating Buku 1 : " << buku1.rating << endl;

    cout << "\nJudul Buku 2 : " << buku2.judul << endl;
    cout << "Penulis Buku 2 : " << buku2.penulis << endl;
    cout << "Tahun Terbit Buku 2 : " << buku2.thTerbit << endl;
    cout << "Rating Buku 2 : " << buku2.rating << endl;

    cout << "\nJudul Buku 3 : " << buku3.judul << endl;
    cout << "Penulis Buku 3 : " << buku3.penulis << endl;
    cout << "Tahun Terbit Buku 3 : " << buku3.thTerbit << endl;
    cout << "Rating Buku 3 : " << buku3.rating << endl;

    cout << "\nJudul Buku 4 : " << buku4.judul << endl;
    cout << "Penulis Buku 4 : " << buku4.penulis << endl;
    cout << "Tahun Terbit Buku 4 : " << buku4.thTerbit << endl;
    cout << "Rating Buku 4 : " << buku4.rating << endl;

    cout << "\nJudul Buku 5 : " << buku5.judul << endl;
    cout << "Penulis Buku 5 : " << buku5.penulis << endl;
    cout << "Tahun Terbit Buku 5 : " << buku5.thTerbit << endl;
    cout << "Rating Buku 5 : " << buku5.rating << endl;

    return 0;
}