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
    ASSERT_FLOAT_EQ (float(x1), float(1.495234));
    ASSERT_FLOAT_EQ (float(x2), float(-3.745234));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(0, 8, -16, &x1, &x2), 0);
    ASSERT_FLOAT_EQ (float(x1), float(2));
    ASSERT_FLOAT_EQ (float(x2), float(0));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(3, 6, 3, &x1, &x2), 0);
    ASSERT_FLOAT_EQ (float(x1), float(-9));
    ASSERT_FLOAT_EQ (float(x2), float(0));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(0, 0, 27, &x1, &x2), -1);
    ASSERT_FLOAT_EQ (float(x1), float(0));
    ASSERT_FLOAT_EQ (float(x2), float(0));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(10, 22.5, 0, &x1, &x2), 1);
    ASSERT_FLOAT_EQ (float(x1), float(0));
    ASSERT_FLOAT_EQ (float(x2), float(-2.25));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(25, 0, -625, &x1, &x2), 1);
    ASSERT_FLOAT_EQ (float(x1), float(5));
    ASSERT_FLOAT_EQ (float(x2), float(-5));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(142.5, 0, 0, &x1, &x2), 0);
    ASSERT_FLOAT_EQ (float(x1), float(0));
    ASSERT_FLOAT_EQ (float(x2), float(0));

}

TEST(Test2, equation_Positive_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(0, 8, -16, &x1, &x2), 0);
    ASSERT_FLOAT_EQ (float(x1), float(2));
    ASSERT_FLOAT_EQ (float(x2), float(0));

    x1 = 0;
    x2 = 0;

    EXPECT_EQ(equation(0, -0.25, 0, &x1, &x2), 0);
    ASSERT_FLOAT_EQ (float(x1), float(0));
    ASSERT_FLOAT_EQ (float(x2), float(0));
}

TEST(Test3, equation_Negative_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(25, 0, 625, &x1, &x2), -1);
    ASSERT_FLOAT_EQ (float(x1), float(0));
    ASSERT_FLOAT_EQ (float(x2), float(0));
}


TEST(Test4, equation_Negative_Test) {
    double x1 = 0;
    double x2 = 0;

    EXPECT_EQ(equation(0, -0, 0.0, &x1, &x2), -2);
    ASSERT_FLOAT_EQ (float(x1), float(0));
    ASSERT_FLOAT_EQ (float(x2), float(0));
}

#endif // EQUATION_TEST_H
