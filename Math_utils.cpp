#include "Math_utils.h"
#include <math.h>

bool Math::isSquare(int num) {
    double root = sqrt(num);
    //int rt = floor(root);
    if (root - floor(root) == 0)
        return true;
    else
        return false;
}

int Math::GetDigit(int num, int place) {

    return 0;
}

bool Math::EqualParity(int x, int y) {
    return 0;
}

bool Math::EqualParity(std::vector<int> nums) {
    return 0;
}