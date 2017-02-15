#include <iostream>
#include <string>
#include <sstream>
#include "lib/add.h"
#include "lib/multiply.h"
#include "lib/loop.h"
#include <valarray>
#include <array>
#include <vector>

double getVectorSum(const std::vector<double> &vector);

using namespace std;


int main()
{

    double beginningBalance;
    double endingBalance;

    cout << "Please input a beginning bank balance: $";
    cin >> beginningBalance;
    char transactionType;
    bool loopCounter = true;
    vector<double>deposits;
    vector<double>checks;
    vector<double>withdrawals;

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
    cout << "Beginning balance was: $" << beginningBalance;
    cout << "\n*************************************\n";
    cout << "Total amount of deposits: $" << sumOfDeposits << endl;
    cout << "Total amount of checks: $" << sumOfChecks << endl;
    cout << "Total amount of withdrawals: $" << sumOfWithdrawals;
    cout << "\n*************************************\n";
    cout << "Ending balance is: $" << endingBalance;

    return 0;
}

double getVectorSum(const vector<double> &vector) {
    double sum = 0;
    for (auto& n : vector){
        sum += n;
    }
    return sum;
}




