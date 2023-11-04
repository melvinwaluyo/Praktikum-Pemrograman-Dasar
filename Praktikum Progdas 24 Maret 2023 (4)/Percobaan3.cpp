#include <iostream>
#include <cstring>

using namespace std;

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
    int totalPage;
    int publishYear;
};

int main() {
    struct Books Book1; // Declare Book1 of type Book
    struct Books Book2; // Declare Book2 of type Book

    // book 1 specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;
    Book1.totalPage = 696;
    Book1.publishYear = 2004;

    // book 2 specification
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;
    Book2.totalPage = 420;
    Book2.publishYear = 2012;

    // Print Book1 info
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;
    cout << "Book 1 total page : " << Book1.totalPage << endl;
    cout << "Book 1 publish year : " << Book1.publishYear << endl;

    // Print Book2 info
    cout << "\nBook 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;
    cout << "Book 2 total page : " << Book2.totalPage << endl;
    cout << "Book 2 publish year : " << Book2.publishYear << endl;

    return 0;
}