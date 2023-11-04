#include <iostream>
#include <cstring>
#include <string>

using namespace std;

union jenisFilm
{
    char judul[40];
    int tahunRilis;
    double durasi;
    float rating;
    long jumlahReview;
}film1, film2, film3;

int main()
{
    //Film 1 
    strcpy(film1.judul, "The Room");
    cout << "Judul : " << film1.judul << endl;
    cout << "Ukuran elemen : " << sizeof(film1.judul) << endl;
    film1.tahunRilis = 2003;
    cout << "Tahun rilis : " << film1.tahunRilis << endl;
    cout << "Ukuran elemen : " << sizeof(film1.tahunRilis) << endl;
    film1.durasi = 1.5;
    cout << "Durasi : " << film1.durasi << " jam" << endl;
    cout << "Ukuran elemen : " << sizeof(film1.durasi) << endl;
    film1.rating = 3.6;
    cout << "Rating : " << film1.rating << endl;
    cout << "Ukuran elemen : " << sizeof(film1.rating) << endl;
    film1.jumlahReview = 91113;
    cout << "Jumlah review : " << film1.jumlahReview << endl;
    cout << "Ukuran elemen : " << sizeof(film1.jumlahReview) << endl;
    cout << "Ukuran variabel union : " << sizeof(film1);

    cout << endl << endl;

    //Film 2
    strcpy(film2.judul, "Morbius");
    cout << "Judul : " << film2.judul << endl;
    cout << "Ukuran elemen : " << sizeof(film2.judul) << endl;
    film2.tahunRilis = 2022;
    cout << "Tahun rilis : " << film2.tahunRilis << endl;
    cout << "Ukuran elemen : " << sizeof(film2.tahunRilis) << endl;
    film2.durasi = 1.73;
    cout << "Durasi : " << film2.durasi << " jam" << endl;
    cout << "Ukuran elemen : " << sizeof(film2.durasi) << endl;
    film2.rating = 5.2;
    cout << "Rating : " << film2.rating << endl;
    cout << "Ukuran elemen : " << sizeof(film2.rating) << endl;
    film2.jumlahReview = 133220;
    cout << "Jumlah review : " << film2.jumlahReview << endl;
    cout << "Ukuran elemen : " << sizeof(film2.jumlahReview) << endl;
    cout << "Ukuran variabel union : " << sizeof(film2);

    cout << endl << endl;

    //Film 3 
    strcpy(film3.judul, "Titanic");
    cout << "Judul : " << film3.judul << endl;
    cout << "Ukuran elemen : " << sizeof(film3.judul) << endl;
    film3.tahunRilis = 1998;
    cout << "Tahun rilis : " << film3.tahunRilis << endl;
    cout << "Ukuran elemen : " << sizeof(film3.tahunRilis) << endl;
    film3.durasi = 3.26;
    cout << "Durasi : " << film3.durasi << " jam" << endl;
    cout << "Ukuran elemen : " << sizeof(film3.durasi) << endl;
    film3.rating = 7.9;
    cout << "Rating : " << film3.rating << endl;
    cout << "Ukuran elemen : " << sizeof(film3.rating) << endl;
    film3.jumlahReview = 1207735;
    cout << "Jumlah review : " << film3.jumlahReview << endl;
    cout << "Ukuran elemen : " << sizeof(film3.jumlahReview) << endl;
    cout << "Ukuran variabel union : " << sizeof(film3);

    return 0;
}