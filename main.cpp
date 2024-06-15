#include <iostream>

#include "Include/calculator.h"
#include "Include/hypotenuse.h"
#include "Include/temp_converter.h"
#include "Include/number_guesser.h"

void showMenu(){
    std::cout << "1. Calculate Hypotenuse\n";
    std::cout << "2. CLI Calculator\n";
    std::cout << "3. Temperature Converter\n";
    std::cout << "4. Number Guessing Game\n";
    std::cout << "5. Exit\n";
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
                return;
            }
            std::cout << num1 << " " << op << " " << num2 << " = " << res << std::endl;
            return;

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
                return;
            }
            if (unit == 'c' || unit == 'C') {
                std::cout << temp << "\370F -> " <<  converted << "\370C\n";
            } else {
                std::cout << temp << "\370C -> " <<  converted << "\370F\n";
            }
            return;
        case 4:
            srand(time(nullptr));
            int num, guess, tries;
            num = (rand() % 100);
            guess = 0;
            tries = 0;

            std::cout << "NUMBER GUESSER PROGRAM\n";
            do {
                tries++;
                std::cout << "Guess a number between 0 and 100:\n";
                std::cin >> guess;
            }
            while (NumberGuesser::numberGuesser(num, guess) != 0);

            std::cout << "You found the number " << num << " in " << tries << " tries!\n";
            return;

        case 5:
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
