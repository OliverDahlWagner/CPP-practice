#include <iostream>

int main() {
    std::string car[] = {"Corvette", "Mustang", "Audi"};

    for (int i = 0; i < sizeof(car) / sizeof(std::string); i++) {
        std::cout << car[i] << "\n";
    }

    for (std::string thecar : car) {  // for each
        std::cout << thecar << "\n";
    }

    return 0;
}
