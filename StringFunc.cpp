#include <iostream>

int main()
{

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.clear();

    name.append("@gmail.com");

    std::cout << name.at(0) << "\n";

    name.insert(0, "!!");

    std::cout << name << "\n";

    std::cout << name.find(' ') << "\n";

    name.erase(0, 2);
    std::cout << name << "\n";

    // if (name.length() > 12)
    // {
    //     std::cout << "Your name cant be over 12 chars" << "\n";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name << "\n";
    // }

    // if (name.empty())
    // {
    //     std::cout << "You did not enter a name";
    // }
    // else
    // {
    //     std::cout << "Welcome " << name;
    // }

    return 0;
}