//
// Created by Alex on 2/15/17.
//
#include <vector>
#include <iostream>
using namespace std;

void loopThroughTransactions(char transactionType, bool loopCounter, vector<double> &deposits, vector<double> &checks,
                             vector<double> &withdrawals) {
  //  do {
    while (loopCounter){
        cout << "\n*************************************\n";
        cout << "\nEnter 'q' to exit application and show statement\n";
        cout << "Enter 'd' to add deposit\nEnter 'c' to add check\nEnter 'w' for withdrawal\n";
        cin >> transactionType;
        double input;

            switch (tolower(transactionType)) {
                case 'd' :
                        while (true){
                            cout << "Please enter amount you want to deposit: $";
                            if (cin >> input){
                                deposits.push_back(input);
                                break;
                            } else {
                                cout << "Invalid input, please try again\n";
                                cin.clear();
                            }
                        }
                    break;
                case 'c' :
                        while (true){
                            cout << "Please enter amount for check: $";
                            if (cin >> input){
                             checks.push_back(input);
                                break;
                            } else {
                                cout << "Invalid input, please try again\n";
                                cin.clear();
                            }
                        }
                    break;
                case 'w' :
                    while (true){
                        cout << "Please enter amount to withdrawal: $";
                        if (cin >> input){
                            withdrawals.push_back(input);
                            break;
                        } else {
                            cout << "Invalid input, please try again\n";
                            cin.clear();
                        }
                    }
                    break;
                case 'q' :
                    cout << "Exiting application now and showing bank statement" << endl;
                    loopCounter = false;
                    break;
                default:
                    cout << "Transaction Type " << transactionType << " is invalid.  Please try again";
                    break;
            }



    }
}