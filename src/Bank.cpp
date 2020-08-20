#include "Bank.h"
#include <iostream>
#include <string>
using namespace std;

Bank::Bank()
{

    balance = 0; // Set bank balance to empty

};

void Bank::Status()
{
    Bank b;
    char input;
    int value;
    cout << "Your bank balance is " << b.balance << endl;
    cout << "Would you like to deposit or withdraw? (d/w)" << endl;
    cin >> input;

    if(input == 'd')
    {
        cout << "How much would you like to deposit?" << endl;
        cin >> value;
        b.balance += value;
        cout << "Deposit Accepted! Your new balance is: " << b.balance << endl;
    }

    else if (input == 'w')
    {
        cout << "How much would you like to withdrawl?" << endl;
        cin >> value;

        if(b.balance > value)
        {
            cout << "Sorry, you dont have enough coins!" << endl;
        }
        else{
           b.balance -= value;
        }
    }

    else {
        cout << "Incorrect Value!" << endl;
    }
}
