#pragma once

#include "doctest.h"

namespace calculator
{
int add(int a, int b);
}

#include "doctest.h"

namespace calculator::test
{
TEST_SUITE("calculator");

TEST_CASE("add")
{
    CHECK(add(1, 2) == 3);
}

TEST_SUITE_END();
}
