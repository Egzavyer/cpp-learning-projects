#include <iostream>

#include "Include/calculator.h"
#include "Include/hypotenuse.h"
#include "Include/temp_converter.h"
#include "Include/number_guesser.h"
#include "Include/banking.h"

void showMenu(){
    std::cout << "1. Calculate Hypotenuse\n";
    std::cout << "2. CLI Calculator\n";
    std::cout << "3. Temperature Converter\n";
    std::cout << "4. Number Guessing Game\n";
    std::cout << "5. Banking Program\n";
    std::cout << "10. Exit\n";
    std::cout << "Choose:";
}

void handleMenuChoice(int choice){
    switch(choice){

        case 1:
            double a,b,c;
            std::cout << "PROGRAM TO CALCULATE THE HYPOTENUSE OF A TRIANGLE\n";
            std::cout << "Enter the length of the 1st side in cm:";
            std::cin >> a;
            std::cout << "Enter the length of the 2nd side in cm:";
            std::cin >> b;
            c = Hypotenuse::hypotenuse(a,b);
            std::cout << "The hypotenuse is " << c << "cm\n";
            break;

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
                break;
            }
            std::cout << num1 << " " << op << " " << num2 << " = " << res << std::endl;
            break;

        case 3:
            double temp,converted;
            char unit;

            std::cout << "TEMPERATURE CONVERTER PROGRAM\n";
            std::cout << "Enter the temperature:";
            std::cin >> temp;
            std::cout << "Enter the units to convert to (F/C):";
            std::cin >> unit;
            try {
                converted = TempConverter::converter(temp, unit);
            } catch(std::exception& e) {
                std::cout << e.what() << std::endl;
                break;
            }
            if (unit == 'c' || unit == 'C') {
                std::cout << temp << "\370F -> " <<  converted << "\370C\n";
            } else {
                std::cout << temp << "\370C -> " <<  converted << "\370F\n";
            }
            break;
        case 4:
            srand(time(nullptr));
            int num, guess, tries,min,max,result;
            num = (rand() % 100);
            guess = 0;
            tries = 0;
            min = 0;
            max = 100;

            std::cout << "NUMBER GUESSER PROGRAM\n";
            do {
                tries++;
                std::cout << "Guess a number between " << min << " and " << max << ":";
                std::cin >> guess;
                result = NumberGuesser::numberGuesser(num, guess);
                if (result == -1 && guess >= min) {
                    min = guess + 1;
                } else if (result == 1 && guess <= max) {
                    max = guess - 1;
                }
            }
            while (result != 0);

            std::cout << "You found the number " << num << " in " << tries << " tries!\n";
            break;

        case 5:
            double amount;
            int bankChoice;
            try {
                while (true) {
                    std::cout << "BANKING PROGRAM\n";
                    std::cout << "1. View balance\n";
                    std::cout << "2. Deposit\n";
                    std::cout << "3. Withdraw\n";
                    std::cout << "4. Exit\n";
                    std::cout << "Choose:";
                    std::cin >> bankChoice;

                    Banking account;

                    switch (bankChoice) {
                        case 1:
                            std::cout << "You have ";
                            account.showBalance();
                            std::cout << "$ in your account!\n\n";
                            break;
                        case 2:
                            std::cout << "Enter the amount you want to deposit:\n";
                            std::cin >> amount;
                            std::cout << "Depositing " << amount << "$...\n";
                            try {
                                double newBalance = account.depositMoney(amount);
                                std::cout << "Your new balance is " << newBalance << "$\n\n";
                            } catch (std::exception &e) {
                                std::cout << e.what() << std::endl;
                            }
                            amount = 0;
                            break;
                        case 3:
                            std::cout << "Enter the amount you want to withdraw:\n";
                            std::cin >> amount;
                            std::cout << "Withdrawing " << amount << "$...\n";
                            try {
                                double newBalance = account.withdrawMoney(amount);
                                std::cout << "Your new balance is " << newBalance << "$\n\n";
                            } catch (std::exception &e) {
                                std::cout << e.what() << std::endl;
                            }
                            amount = 0;
                            break;
                        case 4:
                            std::cout << "Exiting Bank...\n";
                            exit(0);
                        default:
                            throw std::invalid_argument("ERROR: Please enter a valid choice\n");
                    }
                }
            } catch (std::exception& e) {
                std::cout << e.what() << std::endl;
                break;
            }

        case 10:
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
