#include <iostream>

#include "Include/calculator.h"
#include "Include/hypotenuse.h"

void showMenu(){
    std::cout << "1. Calculate hypotenuse\n";
    std::cout << "2. CLI Calculator\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose:";
}

void handleMenuChoice(int choice){
    switch(choice){
        case 1:
            double a,b;
            std::cout << "PROGRAM TO CALCULATE THE HYPOTENUSE OF A TRIANGLE\n";
            std::cout << "Enter the length of the 1st side in cm:";
            std::cin >> a;
            std::cout << "Enter the length of the 2nd side in cm:";
            std::cin >> b;
            std::cout << "The hypotenuse is " << Hypotenuse::hypotenuse(a,b) << "cm\n";
            return;
        case 2:
            char op;
            double num1,num2,res;
            std::cout << "CLI CALCULATOR PROGRAM\n";
            std::cout << "Enter 1st number:";
            std::cin >> num1;
            std::cout << "Enter operator (+ - * /):";
            std::cin >> op;
            std::cout << "Enter 2nd number:";
            std::cin >> num2;
            try{
                res = Calculator::calculate(op,num1,num2);
            } catch (std::exception& e){
                std::cout << e.what() << std::endl;
            }
            std::cout << num1 << " " << op << " " << num2 << " = " << res << std::endl;
            return;
        case 3:
            std::cout << "EXITING...";
            exit(0);
        default:
            std::cout << "ERROR: PLEASE CHOOSE A VALID OPTION";
    }
}

int main() {
    int choice;
    showMenu();
    std::cin >> choice;
    handleMenuChoice(choice);
    std::cout << "END OF PROGRAM";
}
