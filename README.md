# INFO450BankStatement

### Functional Requirements:
Write a program  that collects input from the  user to track transactions  made on a bank account.
These transactions include :  Withdrawals,  Checks and Deposits
Your program should start by  requesting the user enter the beginning balance for the account
After which program should allow the user to enter the type and amount  of a transaction
Your program should continue to loop, requesting  type and amount of a transaction  until they decide to quit.
When the user has  decided to quit entering transactions,  a summary of the transactions should be displayed:
* Beginning balance
* Total deposits
* Total Withdrawals
* Total Checks
* Ending balance
The summary of the transactions should be presented as fixed format, right justified  with  2 decimal point precision

### Program Requirements:

Your program should  allow for entry that is case insensitive :  e.g.  ‘W’ or ‘w’ may be entered for Withdrawals
Your program should check for invalid entry of transaction type ;  if invalid type is entered , an error message should be presented and the user allowed to proceed.
Formatting of the values should use  cout with manipulators ( fixed,  setw(n) and setprecision(n) – google it!   E.g. https://www.uow.edu.au/~lukes/TEXTBOOK/notes-cpp/io/omanipulators.html  )
