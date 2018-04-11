// Author: Sherry & Devon
// Class file for Math

#pragma once

#include <vector>
 

/**
  * Class Math
  *
  */
class Math {

	public:
	    bool isSquare(int num);
	    int GetDigit(int num, int place);
	    bool EqualParity(int x, int y);
	    bool EqualParity(std::vector<int> nums);
	    std::vector<int> digits;
        static double solveQuadratic(int a, int b, int c);
};
