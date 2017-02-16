//
// Created by Alex on 2/15/17.
//
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

void showEachTransaction(const vector<double> &vector) {
    for(auto& x : vector){
        cout << "\t\t -- $" << x << endl << setprecision(2);
    }
}
