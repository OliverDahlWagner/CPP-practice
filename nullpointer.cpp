#include <iostream>

int main() {
    //
    // nullptr = keyword represents a null pointer literal

    int *pointer = nullptr;

    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "address was not assigned";
    } else {
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }

    return 0;
}