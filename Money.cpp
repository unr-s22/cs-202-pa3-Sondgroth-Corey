#include <iostream>
#include "Money.h"
#include <ostream>
#include <string>
using namespace std;


Money::Money(){
    dollars = 0;
    cents = 0;

}
Money::Money(int bills, int coin){
    dollars = bills;
    cents = coin;
}
int Money:: getCents(){
    return cents;

}
int Money:: getDollars(){
    return dollars;

}
void Money:: setCents(int cents){
    this->cents = cents;
}
void Money:: setDollars(int dollars){
    this->dollars = dollars;

}

bool operator <= (const Money &left, const Money &right){
    if (left.dollars<= right.dollars){
        return true;
    }
        else if (left.dollars == right.dollars){
            if(left.cents <= right.cents){
                return true;
            }
        }
        return false;
}

bool operator >= (const Money &left, const Money &right){
    if (left.dollars >= right.dollars){
        return true;
    }
        else if (left.dollars == right.dollars){
            if (left.cents >= right.cents){
                return true;
            }
        }
        return false;
}
bool operator == (const Money &left, const Money &right){
    if(left.dollars == right.dollars){
        return true;
    }
        else if (left.dollars == right.dollars){
            if (left.cents == right.cents){
                return true;
            }
        }
        return false;

}
bool operator != (const Money &left, const Money &right){
    if(left.dollars != right.dollars){
        return true;
    }
        else if(left.dollars == right.dollars){
            if (left.cents != right.cents){
                return true;
            }
        }
        return false;
}
bool operator < (const Money &left, const Money &right){
    if(left.dollars < right.dollars){
        return true;
    }
        else if (left.dollars == right.dollars){
            if (left.cents < right.cents){
                return true;
            }
        }
        return false;
}

bool operator > (const Money &left, const Money &right){
    if(left.dollars > right.dollars){
        return true;
    }
        else if (left.dollars == right.dollars){
            if(left.cents > right.cents){
                return true;
            }
        }
        return false;
}


Money operator + (const Money &left, const Money &right){
    Money cash;
        cash.dollars = (left.dollars + right.dollars);
        cash.cents = (left.cents + right.cents);

            if(cash.cents >= 100){
                cash.cents = (cash.cents - 100);
                cash.dollars = (cash.dollars + 1); 
            }
        return cash;
}

Money operator - (const Money &left, const Money &right){
    Money cash;
        cash.dollars = (left.dollars - right.dollars);
        cash.cents = (left.cents + right.cents);

            if(cash.cents < 0 ){
                cash.cents = (cash.cents + 100);
                cash.dollars = (cash.dollars - 1);
            }
        return cash;
}


std::ostream& operator<<(std::ostream &stream, const Money &cash){
   stream<< "$" << cash.dollars << "." << cash.cents;
    return stream;
}
