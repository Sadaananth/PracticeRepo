#include "Hashmap.hpp"
#include <gtest/gtest.h>

TEST(HashmapTest, checkEntry)
{
    EXPECT_NO_THROW((Hashmap<int, int>()));
}
