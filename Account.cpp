#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;

void Account::makeDeposit (Money) {
  int dollars, cents;
  Account::update = true;
  Account::deposit += 1;
  cout << "Enter dollar amount for deposit: " << endl;
  cin >> dollars;
  Account::initialBalance.setDollars(dollars);
  cout << "Enter cents for deposit: " << endl;
  cin >> cents;
	Account::initialBalance.setCents(cents);
  Account::deposits.push_back(initialBalance);
}

void Account::makeWithdrawals (Money) {
  int dollars, cents;
  Account::update = true;
  Account::withdraw += 1;
  cout << "Enter dollars to withdraw: " << endl;
  cin >> dollars;
  Account::initialBalance.setDollars(dollars);
  cout << "Enter cents to withdraw: ";
  cin >> cents;
  Account::initialBalance.setCents(cents);
  Account::withdraws.push_back(initialBalance);
}

ostream& operator<<(std::ostream &stream, const Account &acc){
  if (Account::needsUpdate) {
      int centValue, dollarValue;
      centValue = Account::initialBalance.getCents();
      dollarValue = Account::initialBalance.getDollars();

       if (Account::deposits.size() > 0) {
          for (int i=0; i < Account::deposits.size(); i++) {
						centValue += Account::deposits[i].getCents();
            dollarValue += Account::deposits[i].getDollars();
          }
        }
        if (Account::totalWithdraws.size() > 0) {
          for (int i=0; i < Account::totalWithdraws.size(); i++) {
            centValue -= Account::totalWithdraws[i].getCents();
            dollarValue -= Account::totalWithdraws[i].getDollars();
          }
        }
  	Account::initialBalance.setCents(centValue);
		Account::initialBalance.setDollars(dollarValue);
  }

	stream << "Account Details\n--------------------------\nCurrent Balance:" << Account::initialBalance << endl;
  stream << "\n--------------------------\nNumber of Deposits: " << Account::totalDeposits << endl;
	stream << "\n--------------------" << endl;
  for (int i=0; i < Account::totalDeposits.size(); i++) {
    stream << "(" << i << ") " << Account::totalDeposits[i] << endl;
  }

  stream << "--------------------------\nNumber of Withdrawals: " << Account::withdraw << endl;
	stream << "\n--------------------" << endl;
  for (int i=0; i < Account::totalWithdraws.size(); i++) {
    stream << "(" << i << ") " << Account::totalWithdraws[i] << endl;
  }
  return stream;
}
