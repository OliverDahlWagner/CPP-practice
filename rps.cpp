#include <ctime>
#include <iostream>

char getUserChoise();
char getComputerChoice();
void showChoice(char choise);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoise();
    std::cout << "Your choise: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choise: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoise() {
    char player;
    std::cout << "Rock Paper Scissors Game !\n";

    do {
        std::cout << "Choose one the following";
        std::cout << "****************'\n";
        std::cout << "r is for rock   !\n";
        std::cout << "p is for paper  !\n";
        std::cout << "s is for scissor!\n";

        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
};

char getComputerChoice() {
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

    return 0;
};

void showChoice(char choise)

{
    switch (choise) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissor\n";
            break;
    }
};

void chooseWinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 'r') {
                std::cout << "It's a tie";
            } else if (computer == 'p') {
                std::cout << "You lose!";
            } else {
                std::cout << "You win!";
            }
            break;
        case 'p':
            if (computer == 'r') {
                std::cout << "You win!";
            } else if (computer == 'p') {
                std::cout << "It's a tie";
            } else {
                std::cout << "You lose!";
            }
            break;
        case 's':
            if (computer == 'r') {
                std::cout << "You lose!";
            } else if (computer == 'p') {
                std::cout << "You win!";
            } else {
                std::cout << "It's a tie";
            }
            break;
    }
};