#include <iostream>

int main()
{
    int temp;
    bool sunny = true;

    std::cout << "Enter the TEMP: ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30)
    {
        std::cout << "Temp is Bad\n";
    }
    else
    {
        std::cout << "Temp is Good\n";
    }

    if (!sunny)
    {
        std::cout << "aint sunny";
    }
    else
    {
        std::cout << "It is sunny";
    }

    return 0;
}