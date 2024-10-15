#include <iostream>

// Const param = parameter that is effectively read-only
//               code is more secure & conveys intent
//               useful for references and pointers

void printInfo(const std::string name, const int age);

int main() {
    std::string name = "Bro";
    int age = 24;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age) {
    std::cout << name << " " << age;
}
