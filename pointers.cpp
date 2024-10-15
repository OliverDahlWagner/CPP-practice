#include <iostream>

int main() {
    // pointers = vairable that stores a memory address of another variables

    // & adress-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 24;
    std::string freePizzas[5] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4",
                                 "Pizza 5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas =
        freePizzas;  // no neeed for &, array is already memory address

    std::cout << pName << "\n";   // address of value
    std::cout << *pName << "\n";  // value at address

    std::cout << pAge << "\n";
    std::cout << *pAge << "\n";

    std::cout << pFreePizzas << "\n";   // address of array
    std::cout << *pFreePizzas << "\n";  // first element in array (index 0)
    std::cout << *(pFreePizzas + 2)
              << "\n";  // 3 element in the array (index 3)
    return 0;
}