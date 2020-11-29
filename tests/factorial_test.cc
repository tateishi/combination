#include <gtest/gtest.h>

#include "factorial.h"

TEST(FactorialTest, 1) {
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(6, factorial(3));
    EXPECT_EQ(24, factorial(4));
}
