#include "gtest/gtest.h"
#include "Car.h"

TEST(double_it_test_2, test1) {
    EXPECT_EQ (Car::double_it(0), 0);
    EXPECT_EQ (Car::double_it(2), 4);
    EXPECT_EQ (Car::double_it(3), 6);
}

TEST(double_it_test_3, test1) {
    EXPECT_EQ (Car::double_it(0), 0);
    EXPECT_EQ (Car::double_it(-2), -4);
}

