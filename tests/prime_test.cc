#include <gtest/gtest.h>

#include "prime.h"

TEST(PrimeTest, 1) {
    EXPECT_TRUE(is_prime(2));
}
