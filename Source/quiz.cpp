#include "../Include/quiz.h"

std::string Quiz::questions[] = {"1. What year was C++ created?: ",
                            "2. Who invented C++?: ",
                            "3. What is the predecessor of C++?: ",
                            "4. Is C++ great?: "};

std::string Quiz::options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                  {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                  {"A. C", "B. C+", "C. C--", "D. B++"},
                                  {"A. Yes", "B. No", "C. Sometimes", "D. What's C++?"}};

char Quiz::answerKey[] = {'C', 'B', 'A', 'A'};

const int Quiz::SIZE = sizeof(questions)/sizeof(questions[0]);
int Quiz::score = 0;
char Quiz::answer = ' ';



void Quiz::getQuestions() {
    for (int i = 0; i < SIZE; i++){
        std::cout << questions[i] << std::endl;
        getOptions(i);
        std::cout << '\n';
    }
}

void Quiz::getOptions(int question) {
    for (int i = 0; i < 4; i++){
        std::cout << options[question][i] << std::endl;
    }
    std::cout << "Answer:";
    std::cin >> answer;
    checkAnswer(question);
}

void Quiz::checkAnswer(int question) {
    if (answer == answerKey[question]){
        score++;
        std::cout << "Correct!\n";
    } else {
        std::cout << "Wrong\n";
    }
}

int Quiz::getScore() {
    return score;
}
