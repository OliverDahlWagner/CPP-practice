#include <ctime>
#include <iostream>
#include <string>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces,
                 char player);  // player here is player and computer
bool checkTie(char *spaces);
bool isValidInteger(const std::string &str);

int main() {
    char spaces[9]{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';

    bool running = true;

    drawBoard(spaces);

    while (running) {
        // player turn
        playerMove(spaces, player);
        if (checkTie(spaces)) {
            break;
        }
        if (checkWinner(spaces, player)) {
            std::cout << "Player Won !\n";
            break;
        }
        // computer turn
        computerMove(spaces, computer);
        if (checkTie(spaces)) {
            break;
        }
        if (checkWinner(spaces, computer)) {
            std::cout << "Computer Won !\n";
            break;
        }
        // draw board
        drawBoard(spaces);
    }

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  "
              << spaces[2] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  "
              << spaces[5] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  "
              << spaces[8] << "  " << "\n";
    std::cout << "     |     |     " << "\n";
}
void playerMove(char *spaces, char player) {
    //
    std::string input;
    int number;

    do {
        std::cout << "Pick your spot (1-9): ";
        std::cin >> input;

        if (isValidInteger(input) &&
            input.length() == 1) {  // check the length of the string is enough
                                    // or I could have nested more if statements
            number = std::stoi(input);  // makes strings to ints
            number--;
            if (spaces[number] == ' ') {
                spaces[number] = player;
                break;
            } else {
                number = -1000;
            }
        }

        std::cout << "Invalid input or the spot was taken\n";

    } while (number < 0 || number > 8);
}
void computerMove(char *spaces, char computer) {
    srand(time(NULL));  // random seed
    int randNum;

    do {
        randNum = rand() % 9;

        if (spaces[randNum] == ' ') {
            spaces[randNum] = computer;
            std::cout << "computer placed at: " << randNum + 1 << "\n";

            break;
        }

    } while (true);
}
bool checkWinner(char *spaces, char player) {
    // Winning combinations: Row, Column, Diagonal
    int winPatterns[8][3] = {
        {0, 1, 2},  // Row 1
        {3, 4, 5},  // Row 2
        {6, 7, 8},  // Row 3
        {0, 3, 6},  // Column 1
        {1, 4, 7},  // Column 2
        {2, 5, 8},  // Column 3
        {0, 4, 8},  // Diagonal 1
        {2, 4, 6}   // Diagonal 2
    };

    for (int i = 0; i < 8; i++) {
        if (spaces[winPatterns[i][0]] == player &&
            spaces[winPatterns[i][1]] == player &&
            spaces[winPatterns[i][2]] == player) {
            drawBoard(spaces);
            std::cout << "**********\n";
            std::cout << "**********\n";
            return true;  // Player/Computer has won
        }
    }

    return false;  // No winner
}

bool checkTie(char *spaces) {
    for (int i = 0; i < sizeof(spaces) / sizeof(spaces[0]); i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "**********\n";
    std::cout << "**********\n";
    std::cout << "It's a Tie!\n";

    drawBoard(spaces);

    return true;
}

// didnt need to make this. ONLY for when a char is given.
bool isValidInteger(const std::string &str) {
    //
    if (str.empty()) return false;  // false - no string

    if (str[0] == '-') return false;  // false - negative int

    for (int i = 0; i < str.size(); i++) {
        if (!std::isdigit(str[i])) {  // is char an int
            return false;             // false - char in sting that aint a int
        }
    }

    return true;
}