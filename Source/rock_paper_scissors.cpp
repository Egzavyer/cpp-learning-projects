#include "../Include/rock_paper_scissors.h"

RockPaperScissors::RockPaperScissors(): userChoice(' '), computerChoice(' '), wins(0), losses(0), draws(0) {}

void RockPaperScissors::setUserChoice() {
    char choice;
    std::cout << "Enter your choice (R,P,S):";
    std::cin >> choice;
    userChoice = std::tolower(choice, std::locale());
}

void RockPaperScissors::setComputerChoice() {
    srand(time(nullptr));
    int num = (rand() % 3) + 1;
    switch (num) {
        case 1:
            computerChoice = 'R';
            break;
        case 2:
            computerChoice = 'P';
            break;
        case 3:
            computerChoice = 'S';
            break;
        default:
            throw std::invalid_argument("ERROR: Unexpected Computer Choice");
    }
}

void RockPaperScissors::getChoices() const {
    switch (userChoice){
        case 'r':
            std::cout << "You chose Rock!\n";
            break;
        case 'p':
            std::cout << "You chose Paper!\n";
            break;
        case 's':
            std::cout << "You chose Scissors!\n";
            break;
        default:
            throw std::invalid_argument("ERROR: Unexpected Player Choice");
    }

    switch (computerChoice){
        case 'R':
            std::cout << "Computer chose Rock!\n";
            break;
        case 'P':
            std::cout << "Computer chose Paper!\n";
            break;
        case 'S':
            std::cout << "Computer chose Scissors!\n";
            break;
        default:
            throw std::invalid_argument("ERROR: Unexpected Player Choice");
    }
}

void RockPaperScissors::chooseWinner() {
    if ((userChoice == 'r' && computerChoice == 'S') || (userChoice == 'p' && computerChoice == 'R' || userChoice == 's' && computerChoice == 'P')){
        std::cout << "You Win!\n";
        wins++;
    } else if ((userChoice == 'r' && computerChoice == 'P') || (userChoice == 'p' && computerChoice == 'S' || userChoice == 's' && computerChoice == 'R')){
        std::cout << "You Lose!\n";
        losses++;
    } else {
        std::cout << "Draw!\n";
        draws++;
    }
}

void RockPaperScissors::getWinrate() const {
    std::cout << "You have: " << wins << " wins, " << losses << " losses and " << draws << " draws!\n";
}
