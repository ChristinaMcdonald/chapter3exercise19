/*
File Name: Chapter3Exercise19
Programmer: Christina McDonald
Date: 03/21/26
Requirements: Create a display for monthly loan payment.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double rate, numberPayments, loanAmount;

    cout << "Enter interest rate: ";
    cin >> rate;
    cout << "Enter number of payments: ";
    cin >> numberPayments;
    cout << "Enter loan amount: ";
    cin >> loanAmount;

    double monthlyPayment = ((rate * (pow(1 + rate, numberPayments))) / ((pow(1 + rate, numberPayments)) - 1)) * loanAmount;


    double const amountPaid = monthlyPayment * numberPayments;
    double const interest = amountPaid - loanAmount;

    cout << setw(25) << left << "Loan Amount: " << right << "$ " <<loanAmount << endl;
    cout << setw(25) << left << "Monthly Interest Rate: " << right << "$ " << rate << endl;
    cout << setw(25) << left << "Number of Payments: " << right << "$ " << numberPayments << endl;
    cout << setprecision(2) << fixed;
    cout << setw(25) << left << "Monthly Payment: " << right << "$ " << monthlyPayment << endl;
    cout << setw(25) << left << "Amount Paid Back: " <<right << "$ " << amountPaid << endl;
    cout << setw(25) << left << "Interest Paid: " << right << "$ " << interest << endl;


    return 0;


}