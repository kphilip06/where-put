#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE( "Testing if position functions will produce right index" ) {
    SECTION("Testing valid single character search"){
        REQUIRE( positionFind("Hello World!", 'o') == 4 );
}
    SECTION("Testing invalid single character search")
        REQUIRE( positionFind("Hello World!", 'O') == -1 );
}
TEST_CASE( "Testing if string functions will produce right indexes") {
    SECTION("Testing valid string search") {
        REQUIRE( positionFind("Hello World!", "World") == 7 );
    }
       SECTION("Testing invalid string search") {
            REQUIRE( positionFind("Hello World!", "World!") == -1 );
    }
}
