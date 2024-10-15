#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome to the site";
    }
    else if (age < 0)
    {
        std::cout << "You dont exist";
    }
    else
    {
        std::cout << "GTFO!";
    }

    return 0;
}

// switches 1:03:30