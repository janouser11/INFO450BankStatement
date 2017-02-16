//
// Created by Alex on 2/15/17.
//

#ifndef INFO450BANKSTATEMENT_ENDTRANSACTIONOUTPUT_H
#define INFO450BANKSTATEMENT_ENDTRANSACTIONOUTPUT_H
void endTransactionOutput(double beginningBalance, double endingBalance, const std::vector<double> &deposits,
                          const std::vector<double> &checks, const std::vector<double> &withdrawals, double sumOfDeposits,
                          double sumOfChecks, double sumOfWithdrawals);
#endif //INFO450BANKSTATEMENT_ENDTRANSACTIONOUTPUT_H
