#pragma once
#include <vector>
 
class Math {
public:
    bool isSquare(int num);
    int GetDigit(int num, int place);
    bool EqualParity(int x, int y);
    bool EqualParity(std::vector<int> nums);

};