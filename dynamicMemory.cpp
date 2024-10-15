#include <iostream>

int main() {
    //
    // dynamic memory  --- memory that is allocated after the program is already
    // compiled and runnning. use the new operator to allocatememory in the heap
    // rather thean the stack

    // Use full when we dont know how much memory we will need. Makes our
    // programs more flexible, espaecially when accepting user input.

    int *pNum = NULL;
    pNum = new int;

    *pNum = 21;

    std::cout << "Address of pointer: " << pNum << "\n";
    std::cout << "Value: " << *pNum << "\n";

    delete pNum;

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];  // pGrades+1 also works
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << ",";
    }

    delete[] pGrades;

    return 0;
}