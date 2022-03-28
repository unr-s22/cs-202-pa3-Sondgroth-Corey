#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;

void Account::makeDeposit (Money money) {
    update = true;
    deposits.push_back(money);
    totalDeposits++;
}
//I changed your makeDeposits and makeWithdrawals because you didnt need to ask the user for stuff inside them

void Account::makeWithdrawals (Money money) {
 
  update = true;
  withdraws.push_back(money);
  totalWidthdraws++;
}

ostream& operator << (std::ostream& stream, const Account& account){
  if (account.update) {
      int centValue, dollarValue;

      centValue = initialBalance.getCents();
      dollarValue = initialBalance.getDollars();

       if (deposits.size() > 0) {
          for (int i=0; i < deposits.size(); i++) {
			centValue += deposits[i].getCents();
            dollarValue += deposits[i].getDollars();
          }
        }
        if (withdraws.size() > 0) {
          for (int i=0; i < withdraws.size(); i++) {
            centValue -= withdraws[i].getCents();
            dollarValue -= withdraws[i].getDollars();
          }
        }
  	initialBalance.setCents(centValue);
	initialBalance.setDollars(dollarValue);
  }

    stream << "Account Details "<< std::endl;
    stream << "--------------------------"<< std::endl; 
    stream << "Current Balance: "<< initialBalance << endl;
    stream << "--------------------------\n";
    stream << "Number of Deposits: " << totalDeposits << endl;
	stream << "\n--------------------" << endl;

        for (int i=0; i < deposits.size(); i++) {
    stream << "(" << i << ") " << deposits[i] << endl;
     }

    stream << "--------------------------\n" << std::endl;
    stream << "Number of Withdrawals: " << totalWidthdraws << endl;
    stream << "\n--------------------" << endl;
        for (int i=0; i <withdraws.size(); i++) {
    stream << "(" << i << ") " <<withdraws[i] << endl;
  }
  return stream;
}
