#ifndef _BANKSTATUS_H_
#define _BANKSTATUS_H_

#include <string>
using namespace std;


class Bank
{
    public:
        Bank();
        void Status();
        float balance;
        void Deposit(float);
        void Withdrawl();


};

#endif // _BANKSTATUS_H_
