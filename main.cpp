/*
File Name: Chapter3Exercise19
Programmer: Christina McDonald
Date: 03/21/26
Requirements: Create a display for monthly loan payment.
*/

#include <iostream>
#include <cmath>
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

    double const interest = loanAmount * rate;
    double const amountPaid = loanAmount + interest;

    cout << "Loan Amount: " << loanAmount << endl;
    cout << "Monthly Interest Rate: " << rate << endl;
    cout << "Number of Payments: " << numberPayments << endl;
    cout << "Monthly Payment: " << monthlyPayment << endl;
    cout << "Amount Paid Back: " << amountPaid << endl;
    cout << "Interest Paid: " << interest << endl;

    return 0;


}