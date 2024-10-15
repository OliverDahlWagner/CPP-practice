#include <iostream>

void happyBirthday(std::string name, int age); // so its in scope   (read top to bot)

int main()
{
    std::string name = "Oliver";
    int age = 24;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "You are " << age << " years old";
}
