#include <iostream>
#include "Account.h"
#include <string>
using namespace std;
int main()
{
   Account account(Money(300,23));

cout << account << endl;
account.makeDeposit(Money(200,00));
account.makeDeposit(Money(300,24));
account.makeDeposit(Money(501,22));
cout << account << endl;
account.makeWithdrawals(Money(300,10));
account.makeWithdrawals(Money(201,34));
cout << account << endl;






//might have gotten carried away with the funtion test, but it was fun!
Money money1(1100,10);
Money money2(100,10);
Money money3(100,10);
Money money4(1000,50);
if(money1 > money2){
    cout <<  "Money1 is bigger then Money2"<<endl;
}
else if (money1 < money2){
    cout <<  "Money1 is smaller then Money2"<<endl;
}
else{
    cout << "Money1 is the same as Money2"<<endl;
}
if(money2 > money3){
    cout << "Money2 is bigger then Money3"<<endl;
}
else if(money2 < money3){
    cout << "Money2 is less then Money3"<<endl;
}
else{
    cout << "Money3 and Money3 are the same"<<endl;
}
if(money4 > money1 && money4 > money2 && money4 > money3){
    cout << "Money4 has the most money";
}
else if(money3 > money4 && money3 > money2 && money3 > money1){
    cout << "Money3 has the most money"<< endl;
}
else if(money2 > money4 && money2 > money3 && money2 > money1){
    cout << "Money2 has the most money"<< endl;
}
else{
    cout << "Money1 has the most money"<<endl;
}
if(money1 != money2 && money1 != money3 && money1 != money4 && money2 != money3 && money2 != money4 && money3 != money4){
    cout << "None of them are equal"<< endl;
}
else {
    cout << "One of the accounts are equal" << endl;
}




}