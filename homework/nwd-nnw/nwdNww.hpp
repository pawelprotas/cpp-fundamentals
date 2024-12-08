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
    // TODO: Implement me :)
    return -1;
}
