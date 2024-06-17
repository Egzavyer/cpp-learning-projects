#ifndef TUTORIAL_ROCK_PAPER_SCISSORS_H
#define TUTORIAL_ROCK_PAPER_SCISSORS_H

#include <iostream>


class RockPaperScissors {
public:
    RockPaperScissors();
    void setUserChoice();
    void setComputerChoice();
    void getChoices() const;
    void chooseWinner();
    void getWinrate() const;
private:
    char userChoice;
    char computerChoice;
    int wins{};
    int losses{};
    int draws{};
};


#endif //TUTORIAL_ROCK_PAPER_SCISSORS_H
