#include <iostream>
using namespace std;

int main()
{
    double income, jobTime;
    int credit, crimRecord;

    cout << "Enter applicant income range (in grand) : ";
    cin >> income;

    if (income < 30) {
        cout << "Does the applicant have criminal record? (1/0) : ";
        cin >> crimRecord;
        if (crimRecord == 1) {
            cout << "The applicant can get the loan";
        }
        else
            cout << "The applicant can't get the loan";
    }
    else if (income >= 30 && income =< 70) {
        cout << "How long has the applicant been in their job? (in years) : ";
        cin >> jobTime;
        if (jobTime > 5) { 
            cout << "The applicant can get the loan";
        }
        else if (jobTime >= 1 && jobTime =< 5) {
            cout << "Does the applicant make credit card payments? (1/0) : ";
            cin >> credit;
            if (credit == 1) {
                cout << "The applicant can get the loan";
            }
            else
                cout << "The applicant can't get the loan";
        }
        else
            cout << "The applicant can't get the loan";
    }
    else if (income > 70) {
        cout << "Does the applicant have criminal record? (1/0) : ";
        cin >> crimRecord;
        if (crimRecord == 1) {
            cout << "The applicant can't get the loan";
        }
        else
            cout << "The applicant can get the loan";
    }

    return 0;
}