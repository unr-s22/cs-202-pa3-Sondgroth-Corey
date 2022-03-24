#include <iostream>
#include "Money.h"

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

std::ostream& operator<<(std::ostream &stream, const Money &cash){
   stream<< "$" << cash.dollars << "." << cash.cents;
    return stream;
}
