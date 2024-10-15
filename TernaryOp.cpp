#include <iostream>

int main()
{

    int grade = 75;

    grade >= 60 ? std::cout << "Good" : std::cout << "Bad"; // if true, else   true part then false part.

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;

    hungry ? std::cout << "Hungry" : std::cout << "Not hungry";
    std::cout << (hungry ? "Hungry" : "Not hungry");
    
    return 0;
}