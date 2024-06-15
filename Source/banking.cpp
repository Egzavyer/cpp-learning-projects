
#include "../Include/banking.h"

double Banking::balance = 0;

void Banking::showBalance() {
    std::cout << balance;
}

double Banking::depositMoney(double amount) {
    if (amount > 0){
        balance += amount;
    } else {
        throw std::invalid_argument ("ERROR: Enter a valid amount");
    }
    return balance;
}

double Banking::withdrawMoney(double amount) {
    if (amount > 0 && (balance - amount) > 0){
        balance -= amount;
    }else if (amount < 0){
        throw std::invalid_argument ("ERROR: Enter a valid amount");
    } else if ((balance - amount)  < 0){
        throw std::invalid_argument ("ERROR: Insufficient funds");
    }
    return balance;
}
