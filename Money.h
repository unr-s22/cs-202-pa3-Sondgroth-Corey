
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

    friend bool operator == (const Money&, const Money&);
    friend bool operator != (const Money&, const Money&);
    friend bool operator < (const Money&, const Money&);
    friend bool operator > (const Money&, const Money&);
    friend bool operator <= (const Money&, const Money&);
    friend bool operator >= (const Money&, const Money&);


    friend Money operator + (const Money&, const Money&);
    friend Money operator - (const Money&, const Money&);


    friend std::ostream& operator << (std::ostream &stream, const Money &cash);

};
