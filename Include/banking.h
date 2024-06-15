
#ifndef TUTORIAL_BANKING_H
#define TUTORIAL_BANKING_H

#include <iostream>
#include <stdexcept>

class Banking {
public:
    Banking();
    void showBalance() const;
    double depositMoney(double amount);
    double withdrawMoney(double amount);
private:
    double balance;
};


#endif //TUTORIAL_BANKING_H
