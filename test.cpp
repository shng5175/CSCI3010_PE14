#define CATCH_CONFIG_MAIN 

#include "catch.h"
#include "Math_utils.h"

TEST_CASE("Squares are computed", "[isSquare]") {
    Math thing;
    REQUIRE(thing.isSquare(4) == true);
    REQUIRE(thing.isSquare(25) == true);
    REQUIRE(thing.isSquare(5) == false);
    REQUIRE(thing.isSquare(36) == true);
    REQUIRE(thing.isSquare(101) == false);
}

TEST_CASE("Gets correct digit", "[GetDigit]") {
    Math thing;
    REQUIRE(thing.GetDigit(234, 1) == 4);
    REQUIRE(thing.GetDigit(234, 10) == 3);
    REQUIRE(thing.GetDigit(234, 100) == 2);
}