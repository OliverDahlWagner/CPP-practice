#include <ctime>
#include <iostream>

int main()
{
    srand(time(NULL)); // random seed
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumber sticker!\n";
        break;
    case 2:
        std::cout << "You win a Tshirt!\n";
        break;
    case 3:
        std::cout << "You win a Free lunch!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win a concert tickets!\n";
        break;
    }

    return 0;
}

// int num1 = (rand() % 20) + 1;
// int num2 = (rand() % 20) + 1; // D20
// int num3 = (rand() % 20) + 1;

// std::cout << num1 << "\n";
// std::cout << num2 << "\n";
// std::cout << num3 << "\n";
