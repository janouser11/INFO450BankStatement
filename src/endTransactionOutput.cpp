//
// Created by Alex on 2/15/17.
//
#include <iostream>
#include <vector>
#include <iomanip>
#include "../lib/showEachTransaction.h"
using namespace std;

void endTransactionOutput(double beginningBalance, double endingBalance, const vector<double> &deposits,
                          const vector<double> &checks, const vector<double> &withdrawals, double sumOfDeposits,
                          double sumOfChecks, double sumOfWithdrawals) {
    cout << setprecision(2) << fixed;
    cout << "Transaction Summary: ";
    cout << "\n*************************************\n";
    cout << "Beginning balance was: $" << beginningBalance << endl;

    cout << "Deposits:" << endl;
    showEachTransaction(deposits);
    cout << "Total: $" << sumOfDeposits << endl << endl;

    cout << "Checks:" << endl;
    showEachTransaction(checks);
    cout << "Total: $" << sumOfChecks << endl << endl;

    cout << "Withdrawals:" << endl;
    showEachTransaction(withdrawals);
    cout << "Total: $" << sumOfWithdrawals;

    cout << "\n*************************************\n";
    cout << "Ending balance is: $" << endingBalance << endl;
    cout << "\nPress Enter to exit.";
    cin.ignore();
    cin.get();
}