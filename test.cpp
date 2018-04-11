#define CATCH_CONFIG_MAIN 

#include "catch.hpp"
#include "Math_utils.h"

TEST_CASE("Squares are computed", "[isSquare]") {
    Math thing;

    // squares should return true
    REQUIRE(thing.isSquare(4) == true);
    REQUIRE(thing.isSquare(25) == true);
    REQUIRE(thing.isSquare(36) == true);
    REQUIRE(thing.isSquare(0) == true);


    // non squares
    REQUIRE(thing.isSquare(5) == false);
    REQUIRE(thing.isSquare(101) == false);
    REQUIRE(thing.isSquare(-4) == false);
}



TEST_CASE("Gets correct digit", "[GetDigit]") {    
    SECTION("Ones place") {
        Math ones;
        REQUIRE(ones.GetDigit(234, 1) == 4);
    }

    SECTION("Tens place") {
        Math tens; 
        REQUIRE(tens.GetDigit(234, 10) == 3);
    }

    SECTION("One hundreds place") {
        Math hundereds;
        REQUIRE(hundereds.GetDigit(123, 100) == 1);
    }
}


TEST_CASE("Get Equal Parity") {
    Math equal;

    REQUIRE(equal.EqualParity(1, 1) == true);
    REQUIRE(equal.EqualParity(1, 0) == false);
    REQUIRE(equal.EqualParity(2, 2) == true);
    REQUIRE(equal.EqualParity(2, 1) == false); 
}














