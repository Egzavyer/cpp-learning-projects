//
// Created by xcppl on 2024-06-14.
//

#include "../Include/calculator.h"

double Calculator::calculate(char op, double num1, double num2) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1/num2;
        default:
            throw std::invalid_argument("ERROR: Enter a valid operator (+ - * /)");
    }
}
