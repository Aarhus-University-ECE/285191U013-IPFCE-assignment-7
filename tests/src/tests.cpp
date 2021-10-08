#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "stack.h"
#include "taylor_sine.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("taylor_sine")
{
    // Jens 
}

TEST_CASE("stack"){
    node_t** stackPtr = (node_t**)malloc(sizeof(node_t*));
    initialize(stackPtr);
    REQUIRE(*stackPtr == NULL);
    REQUIRE(empty(stackPtr));

    //B
    node_t** ptrB = (node_t**)malloc(sizeof(node_t*));
    initialize(ptrB);
    node_t* ptrBBak = *ptrB;
    int x = 5;
    push(x, ptrB);
    REQUIRE(ptrBBak!=*ptrB);
    int y = pop(ptrB);
    REQUIRE(ptrBBak==*ptrB);
    REQUIRE(y==x);

    //C
    node_t** ptrC = (node_t**)malloc(sizeof(node_t*));
    initialize(ptrC);
    node_t* ptrCBak = *ptrC;
    int x0 = 1;
    int x1 = 2;
    push(x0, ptrC);
    REQUIRE(ptrCBak!=*ptrC);
    push(x1, ptrC);
    REQUIRE(ptrCBak!=*ptrC);
    int y0 = pop(ptrC);
    REQUIRE(ptrCBak!=*ptrC);

    int y1 = pop(ptrC);
    REQUIRE(x1==y0);
    REQUIRE(x0==y1);
    REQUIRE(*ptrC == ptrCBak);

}
