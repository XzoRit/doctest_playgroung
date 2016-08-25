#include "leap_year.hpp"

namespace date
{
bool is_leap_year(int year)
{
    return (year % 4 == 0) && ((year % 100) || (year % 400 == 0));
}
}

#include "doctest.h"

namespace date::tests
{
TEST_SUITE("is_leap_year");

TEST_CASE("leap years")
{
    SUBCASE("every 4 year")
    {
        CHECK(is_leap_year(2004));
        CHECK(is_leap_year(2008));
        CHECK(is_leap_year(2012));
    }
    SUBCASE("every 400 year")
    {
        CHECK(is_leap_year(2000));
        CHECK(is_leap_year(1600));
        CHECK(is_leap_year(1200));
    }
}

TEST_CASE("no leap years")
{
    SUBCASE("not divisible by 4")
    {
        CHECK_FALSE(is_leap_year(2001));
        CHECK_FALSE(is_leap_year(2002));
        CHECK_FALSE(is_leap_year(2003));
    }
    SUBCASE("every 100 year")
    {
        CHECK_FALSE(is_leap_year(1900));
        CHECK_FALSE(is_leap_year(1800));
        CHECK_FALSE(is_leap_year(1700));
    }
}

TEST_SUITE_END();
}
