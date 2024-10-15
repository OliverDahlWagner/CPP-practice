#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    int x = 0;

    // if this is writing, no need for first::x
    using namespace first;

    std::cout << x << "\n";
    // std::cout << first::x;

    text_t firstName = "Oliver";
    number_t age = 23;

    std::cout << firstName;
    std::cout << age << "\n";

    std::cout << "\n";
    std::cout << "\n";

    int students = 20;

    students += 1;
    students++;

    students -= 1;
    students--;

    students *= 2;

    students /= 2;

    int remainder = students % 3;

    std::cout << students << "\n";
    std::cout << remainder << "2 left if groups of 3" << "\n";

    std::cout << "\n";
    std::cout << "\n";

    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100;

    std::cout << score << "%" << "\n";

    return 0;
}