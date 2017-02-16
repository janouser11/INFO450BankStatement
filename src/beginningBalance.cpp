//
// Created by Alex on 2/15/17.
//
#include <iostream>
using namespace std;

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