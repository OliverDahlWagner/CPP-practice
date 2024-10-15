#include <iostream>

template <typename T, typename U>
auto max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {
    // function template --- descrives that a function looks like. can be used
    // to generate as many overloaded functions as needed, each using differnt
    // data types

    std::cout << max(1, 2) << '\n';

    return 0;
}