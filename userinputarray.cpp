#include <iostream>

int main() {
    std::string foodArray[5];
    int size = sizeof(foodArray) / sizeof(foodArray[0]);
    std::string temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food you like or press 'q' to quit #" << i + 1
                  << ":";
        std::getline(std::cin, temp);

        if (temp == "q") {
            break;
        }

        foodArray[i] = temp;
    }

    std::cout << "You like the following foods:\n";

    for (int i = 0; !foodArray[i].empty(); i++) {
        std::cout << foodArray[i] << "\n";
    }

    return 0;
}