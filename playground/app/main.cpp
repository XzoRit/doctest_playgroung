#include "lib/calculator.hpp"
#include "lib/leap_year.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "\n******************\n\n";
    std::cout << "calculator::add(1, 2) = " << calculator::add(1, 2) << '\n';
    std::cout << "date::is_leap_year(1234) = " << date::is_leap_year(1234) << '\n';
    std::cout << "\n******************\n";

    return 0;
}
