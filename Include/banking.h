
#ifndef TUTORIAL_BANKING_H
#define TUTORIAL_BANKING_H

#include <iostream>
#include <stdexcept>

class Banking {
public:
    static void showBalance();
    static double depositMoney(double amount);
    static double withdrawMoney(double amount);
private:
    static double balance;
};


#endif //TUTORIAL_BANKING_H
