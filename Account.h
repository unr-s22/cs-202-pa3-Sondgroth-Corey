#include <iostream>
#include "Money.h"

class Account{
	double initialBalance;
	
	public:
	 Account(Money){
		initialBalance = 300.23;
	}

	  void makeDeposit(Money);
	  void makeWithdrawals(Money);
};
