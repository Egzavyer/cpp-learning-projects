#ifndef TUTORIAL_QUIZ_H
#define TUTORIAL_QUIZ_H

#include <iostream>

class Quiz {
public:
    static void getQuestions();
    static void getOptions(int question);
    static void checkAnswer(int question);
    static int getScore();
private:
    static std::string questions[];
    static std::string options[][4];
    static char answerKey[];
    static const int SIZE;
    static char answer;
    static int score;
};


#endif //TUTORIAL_QUIZ_H
