
#ifndef TUTORIAL_CREDITCARDVALIDATOR_H
#define TUTORIAL_CREDITCARDVALIDATOR_H

#include <string>
#include <iostream>

class CreditCardValidator {
public:
    static bool validate(const std::string &creditCardNumber);
private:
    static int getDigit(int number);
    static int sumOddDigits(const std::string& cardNumber);
    static int sumEvenDigits(const std::string& cardNumber);
};


#endif //TUTORIAL_CREDITCARDVALIDATOR_H
