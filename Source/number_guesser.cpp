
#include "../Include/number_guesser.h"

int NumberGuesser::numberGuesser(int num, int guess) {

    if (guess > num) {
        std::cout << "Lower!\n\n";
        return 1;
    } else if(guess < num) {
        std::cout << "Higher!\n\n";
        return -1;
    } else {
        std::cout << "You got it!\n";
        return 0;
    }
}