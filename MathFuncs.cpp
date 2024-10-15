#include <iostream>
#include <cmath>

int main()
{

    double x = 3.14;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x,y);

    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-3);   // absolute value function, how far from you are

    // z = round(x)   // round closet
    // z = ceil(x);   // round up

    z = floor(x);   // round down

    std::cout << z;

    return 0;
}