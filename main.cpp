#include <iostream>
#include "lib/vectorSum.h"
#include "lib/beginningBalance.h"
#include "lib/transactions.h"
#include "lib/endTransactionOutput.h"
#include "lib/variables.h"
using namespace std;

int main()
{
    //This prompts user for beginning balance and handles errors
    beginningBalance = getBeginningBalance(beginningBalance);

    //After user inputs balance, a loop will begin that allows user to add any amount of any transaction
    loopThroughTransactions(transactionType, loopCounter, deposits, checks, withdrawals);

    //Calculates and assigns the sums to variables
    double sumOfDeposits = getVectorSum(deposits);
    double sumOfChecks = getVectorSum(checks);
    double sumOfWithdrawals = getVectorSum(withdrawals);
    endingBalance = (beginningBalance + sumOfDeposits + sumOfChecks) - sumOfWithdrawals;

    //Final console output with summary of transactions
    endTransactionOutput(beginningBalance, endingBalance, deposits, checks, withdrawals, sumOfDeposits, sumOfChecks,
                         sumOfWithdrawals);
    return 0;
}















