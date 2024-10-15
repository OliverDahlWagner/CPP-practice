#include <iostream>

int main()
{

    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You did great";
        break;
    case 'B':
        std::cout << "You did great";
        break;
    case 'C':
        std::cout << "You did great";
        break;
    case 'D':
        std::cout << "Could be better";
        break;
    case 'F':
        std::cout << "You FAILED!";
        break;

    default:
        std::cout << "Please Enter a char GRADE! (A-F in caps)";
        break;
    }

    return 0;
}