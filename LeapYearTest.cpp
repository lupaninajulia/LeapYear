#include "UnitTest++.h"

bool IsLeapYear(int Year);

namespace
{
    TEST(OurFirstTest)
    {
        const bool Result = IsLeapYear(1972);
        CHECK_EQUAL(true, Result);
    }

    TEST(OurSecondTest)
    {
        const bool Result = IsLeapYear(1973);
        CHECK_EQUAL(false, Result);
    }
}
