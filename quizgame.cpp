#include <iostream>

int main() {
    std::string questions[] = {
        "What year was c++ created?: ", "2 Who created c++?:",
        "3 What is the predecessor of c++?: ", "4 is the earth flat?: "};

    std::string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido can Rossum", "B. Bjarne Stroustrup", "C. John Carmack",
         "D. Mark Zuck"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth"}};

    char anserKey[] = {'C', 'B', 'A', 'B'};

    int sizeOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < sizeOfQuestions; i++) {
        std::cout << "*************************\n";
        std::cout << questions[i] << "\n";
        std::cout << "*************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == anserKey[i]) {
            std::cout << "CORRECT\n";
            score++;
        } else {
            std::cout << "WRONG!\n";
            std::cout << "The correct answer is: " << anserKey[i] << "\n";
        }
    }

    std::cout << "*************************\n";
    std::cout << "*        Results        *\n";
    std::cout << "*************************\n";
    std::cout << "CORRECT GUESSES: " << score << "\n";
    std::cout << "# of Questions: " << sizeOfQuestions << "\n";
    std::cout << "Score: " << (score / (double)sizeOfQuestions) * 100 << "%";

    return 0;
}