#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest.h>

namespace lib
{
int run_tests(int argc, char* argv[])
{
    doctest::Context context(argc, argv);
    return context.run();
}
}
