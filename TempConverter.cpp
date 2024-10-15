#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "**** Temp convertion ****\n";

    std::cout << "F = Fahrenheit" << "\n";
    std::cout << "C = celcius" << "\n";
    std::cout << "What unit would like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temp in Celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temp in Fehrenheit is " << temp << "\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temp in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temp in Celsius is " << temp << "\n";
    }
    else
    {
        std::cout << "Please enter valid unit C or F\n";
    }

    std::cout << "*************************";

    return 0;
}