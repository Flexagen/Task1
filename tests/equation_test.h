#ifndef EQUATION_TEST_H
#define EQUATION_TEST_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "equation.h"
}

TEST(Test1, equation_Positive_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(10, 22.5, -56, &x1, &x2), 1);
    if (x1 != 0.0 && x2 != 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(0, 8, -16, &x1, &x2), 0);

    if (x1 == 2.0 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(3, 6, 3, &x1, &x2), 0);

    if (x1 == -9.0 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(0, 0, 27, &x1, &x2), -1);

    if (x1 == x2 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(10, 22.5, 0, &x1, &x2), 1);

    if (x1 == 0.0 && x2 != 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(25, 0, -625, &x1, &x2), 1);

    if (x1 == -x2 && x2 != 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(142.5, 0, 0, &x1, &x2), 0);

    if (x1 == x2 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();
}

TEST(Test2, equation_Positive_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(0, 8, -16, &x1, &x2), 0);

    if (x1 == 2.0 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(0, -0.25, 0, &x1, &x2), 0);

    if (x1 == x2 && x1 == 0.0)
        SUCCEED();
    else
        FAIL();
}

TEST(Test3, equation_Negative_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(25, 0, 625, &x1, &x2), -1);

    if (x1 == x2 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();
}


TEST(Test4, equation_Negative_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(0, -0, 0.0, &x1, &x2), -2);

    if (x1 == x2 && x2 == 0.0)
        SUCCEED();
    else
        FAIL();
}

#endif // EQUATION_TEST_H
