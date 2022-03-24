
#include <iostream>

class Money{
    private: 
    int cents , dollars;



    public:

    Money();

    Money(int bills, int coins);

    int  getDollars();
    int  getCents();

    void setDollars(int dollars);
    void setCents(int cents );

    friend std::ostream& operator << (std::ostream &stream, const Money &cash);

};
