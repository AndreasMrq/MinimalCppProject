#include "gtest/gtest.h"
#include "Example.h"

TEST(ExampleTest, TestReturnTrue)
{
    ASSERT_TRUE(Example::ReturnTrue());
}