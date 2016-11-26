#include "LeapYear.h"

namespace
{
    bool IsDivisableBy4(int Year)
    {
        return (Year%4) == 0;
    }
}

bool IsLeapYear(int Year)
{
    return IsDivisableBy4(Year);
}
