#include <gtest/gtest.h>
#include "../include/MyExceptionClass.hpp"
#include "../include/MyClass.hpp"

TEST(MyExceptionTest, InputOfDouble) {
    double d = 25;
    MyClass myclass(25);
    EXPECT_EQ(myclass.get_number(), 25);
    MyClass myclass2(60);
    EXPECT_NE(myclass2.get_number(), 60);
    EXPECT_EQ(myclass2.get_number(), 0);
}