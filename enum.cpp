#include <iostream>

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};  // no need for 0-6 it happens auto. can do other number tho if needed

int main() {
    //

    Day today = wednesday;

    switch (today) {
        case 0:
            std::cout << "Its Sunday";
            break;
        case 1:
            std::cout << "Its Monday";
            break;
        case 2:
            std::cout << "Its Tuesday";
            break;
        case 3:
            std::cout << "Its Wednesday";
            break;
        case thursday:
            std::cout << "Its Thursday";
            break;
        case friday:
            std::cout << "Its Friday";
            break;
        case saturday:
            std::cout << "Its Saturday";
            break;
    }

    return 0;
}