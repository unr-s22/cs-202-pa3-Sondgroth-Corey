#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;
Account::Account(Money cash){
    initialBalance = cash;
}
void Account::makeDeposit (Money cash) {
    update = true;
    deposits.push_back(cash);
    totalDeposits++;
}
//I changed your makeDeposits and makeWithdrawals because you didnt need to ask the user for stuff inside them

void Account::makeWithdrawals (Money cash) {
 
  update = true;
  withdraws.push_back(cash);
  totalWidthdraws++;
}

ostream& operator << (std::ostream& stream, const Account& account){
    stream << "Account Details "<< std::endl;
    stream << "--------------------------"<< std::endl; 
    stream << "Current Balance: "<< account.initialBalance << endl;
    stream << "--------------------------\n";
    stream << "Number of Deposits: " << account.totalDeposits << endl;
	stream << "\n--------------------" << endl;

        for (int i=0; i < account.deposits.size(); i++) {
    stream << "(" << i + 1 << ") " << account.deposits[i] << endl;
     }

    stream << "--------------------------\n" << std::endl;
    stream << "Number of Withdrawals: " << account.totalWidthdraws << endl;
    stream << "\n--------------------" << endl;
        for (int i=0; i <account.withdraws.size(); i++) {
    stream << "(" << i + 1 << ") " << account.withdraws[i] << endl;
  }
  return stream;
}
