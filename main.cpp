#include <iostream>
#include <string>
#include <sstream>
#include "lib/add.h"
#include "lib/multiply.h"
#include "lib/loop.h"
#include <valarray>
#include <array>
#include <vector>
#include <iomanip>

double getVectorSum(const std::vector<double> &vector);

void showEachTransaction(const std::vector<double> &vector);

double getBeginningBalance(double beginningBalance);

using namespace std;


int main()
{

    double beginningBalance;
    double endingBalance;
    char transactionType;
    bool loopCounter = true;
    vector<double>deposits;
    vector<double>checks;
    vector<double>withdrawals;

    beginningBalance = getBeginningBalance(beginningBalance);




    do {
        cout << "\n*************************************\n";
        cout << "\nEnter 'q' to exit application and show statement\n";
        cout << "Enter `d` to add deposit\nEnter 'c' to add check\nEnter 'w' for withdrawal\n";
        cin >> transactionType;
        double input;

        switch (tolower(transactionType)) {
            case 'd' :

                cout << "Please enter amount you want to deposit: $";
                cin >> input;
                deposits.push_back(input);
                break;

            case 'c' :
                cout << "Please enter amount for check: $";
                cin >> input;
                checks.push_back(input);
                break;
            case 'w' :
                cout << "Please enter amount to withdrawal: $";
                cin >> input;
                withdrawals.push_back(input);
                break;
            case 'q' :
                cout << "Exiting application now and showing bank statement" << endl;
                loopCounter = false;
                break;
            default:
                cout << "Transaction Type " << transactionType << " is invalid.  Please try again";
                break;
        }
    } while (loopCounter);

    double sumOfDeposits = getVectorSum(deposits);
    double sumOfChecks = getVectorSum(checks);
    double sumOfWithdrawals = getVectorSum(withdrawals);
    endingBalance = (beginningBalance + sumOfDeposits + sumOfChecks) - sumOfWithdrawals;
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
    cout << "Ending balance is: $" << endingBalance;


    return 0;
}

double getBeginningBalance(double beginningBalance) {
    cout << "Please input a beginning bank balance: $";
    while (1) {
        if (cin >> beginningBalance) {
            break;
        } else {
            cout << "Invalid Input! Please input a numerical value.\n $";
            cin.clear();
            while (cin.get() != '\n') ;
        }
    }
    return beginningBalance;
}

void showEachTransaction(const vector<double> &vector) {
    for(auto& x : vector){
        cout << "\t\t -- $" << x << endl << setprecision(2);
    }
}

double getVectorSum(const vector<double> &vector) {
    double sum = 0;
    for (auto& n : vector){
        sum += n;
    }
    return sum;
}






