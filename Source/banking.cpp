
#include "../Include/banking.h"

Banking::Banking(): balance(0) {

};

void Banking::showBalance() const{
    std::cout << this->balance;
}

double Banking::depositMoney(double amount) {
    if (amount > 0){
        this->balance += amount;
    } else {
        throw std::invalid_argument ("ERROR: Enter a valid amount");
    }
    return this->balance;
}

double Banking::withdrawMoney(double amount) {
    if (amount > 0 && (this->balance - amount) > 0){
        this->balance -= amount;
    }else if (amount < 0){
        throw std::invalid_argument ("ERROR: Enter a valid amount");
    } else if ((this->balance - amount)  < 0){
        throw std::invalid_argument ("ERROR: Insufficient funds");
    }
    return this->balance;
}
