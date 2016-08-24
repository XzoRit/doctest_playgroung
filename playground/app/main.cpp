#include "lib/calculator.hpp"
#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest.h>
#include <iostream>

namespace lib
{
int run_tests(int argc, char* argv[]);
}

int main(int argc, char* argv[])
{
    doctest::Context context(argc, argv);
    int res = context.run();
    res += lib::run_tests(argc, argv);
    if(res != EXIT_SUCCESS) return res;

    std::cout << "\n******************\n\n";
    std::cout << "calculator::add(1, 2) = " << calculator::add(1, 2) << '\n';
    std::cout << "\n******************\n";

    return 0;
}
