#include <gtest/gtest.h>

#include "factorial.h"
#include "combination.h"

TEST(CombinationTest, 1) {
    EXPECT_EQ(1, combination(5, 0));
}
