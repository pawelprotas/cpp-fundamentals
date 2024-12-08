#pragma once
#include <cstdlib>

int NWD(int lhs, int rhs) {
    if (rhs == 0) {
        return lhs;
    }

    int remainderOfDivision = lhs % rhs;
    while (remainderOfDivision != 0) {
        lhs = rhs;
        rhs = remainderOfDivision;
        remainderOfDivision = lhs % rhs;
    }

    return abs(rhs);
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    lhs = abs(lhs);
    rhs = abs(rhs);
    int result = lhs;
    if (rhs > result) {
        result = rhs;
    }

    int remainderOfDivision1 = result % rhs;
    int remainderOfDivision2 = result % lhs;
    while (remainderOfDivision1 != 0 || remainderOfDivision2 != 0) {
        ++result;
        remainderOfDivision1 = result % rhs;
        remainderOfDivision2 = result % lhs;
    }

    return result;
}
