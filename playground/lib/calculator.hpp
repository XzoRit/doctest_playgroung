#pragma once

#include "doctest.h"

namespace calculator
{
int add(int a, int b);
TEST_CASE("add")
{
    CHECK(add(1, 2) == 3);
}
}
