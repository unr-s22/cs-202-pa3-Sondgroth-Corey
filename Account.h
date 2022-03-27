#include <iostream>
#include "Money.h"
#include "vector"

class Account{
	Money initialBalance;

//These are the vector for depositing and withdrawing money
	std::vector <Money> withdraws;
	std::vector <Money> deposits;

	int totalDeposits = 0, totalWidthdraws = 0;


	
	public:
	 Account(Money);

//You didnt need to set account balance casue its calling from my Money class

	  void makeDeposit(Money);
	  void makeWithdrawals(Money);
	  

	  friend std::ostream operator <<(std::ostream& stream, const Account& account);
};

