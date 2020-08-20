#ifndef _BANK_H_
#define _BANK_H_

#include <string>
using namespace std;

// Store Player Coins

class Bank {
private:
	float balance;

public:
	Bank();
	void Deposit(float);
	void Withdrawl();
};



#endif // !_BANK_H_
