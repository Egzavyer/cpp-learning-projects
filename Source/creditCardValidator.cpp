#include "../Include/creditCardValidator.h"

bool CreditCardValidator::validate(const std::string &creditCardNumber) {
    return ((sumEvenDigits(creditCardNumber) + sumOddDigits(creditCardNumber)) % 10) == 0;
}

int CreditCardValidator::getDigit(const int number) {
    return number % 10 + (number/10 % 10);
}

int CreditCardValidator::sumOddDigits(const std::string& cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0'));
    }
    return sum;
}

int CreditCardValidator::sumEvenDigits(const std::string &cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
