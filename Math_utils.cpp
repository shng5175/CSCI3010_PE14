// Author: Sherry & Devon
// PE 14


#include "Math_utils.h"
#include <math.h>
#include <iostream>

using namespace std;



/**
  * Description: returns true if the number is square
  *
  */
bool Math::isSquare(int num) {
    double root = sqrt(num);
    //int rt = floor(root);
    if (root - floor(root) == 0)
        return true;
    else
        return false;
}


/**
  * Description: returns the digit at place in the number.
  *
  */
int Math::GetDigit(int num, int place) {
    for (; num > 0; num /= 10) digits.push_back(num % 10);

    /*for (int i = 0; i < digits.size(); i++) {
        cout << digits[i] << endl;
    }
    cout << digits.size()<< endl;*/

    int pl = 0;
    while (place > 1) {
        place = place / 10;
        pl++;
    }

    if (place < 0 || pl >= digits.size()) {
        cout << "Error!!" << endl;
        return false;
    }
    else {
        int val = digits[pl];
        return val;
    }
}


/**
  * Description: returns true iff x and y have equal parity (both odd or both even)
  *
  */
bool Math::EqualParity(int x, int y) {
    if((((x % 2) == 0) && ((y % 2) == 0)) || (((x % 2) != 0) && ((y % 2) != 0)))
        return true;
    else
        return false;
}


/**
  * Description: returns true iff all numbers in nums have equal parity (both odd or both even)
  *
  */
bool Math::EqualParity(std::vector<int> nums) {
    int is_even = 0;
    int is_odd = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0)
            is_even++;
        else
            is_odd++;
    }
    if (is_even == nums.size() || is_odd == nums.size())
        return true;
    else
        return false;
}


/*
Calulates x for a given a, b, and c, then returns it
*/
double Math::solveQuadratic(int a, int b, int c) {
    double x1 = (-1 * b + sqrt(b * b - 4 * a * c) / 2 * a * c);
    // to do plus or minus
    double x2 = (-1 * b - sqrt(b * b - 4 * a * c) / 2 * a * c);
    return x1;
}







