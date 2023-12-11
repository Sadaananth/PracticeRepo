#include "Hashmap.hpp"
#include <gtest/gtest.h>

TEST(HashmapTest, checkEntry)
{
    EXPECT_NO_THROW((Hashmap<int, int>()));
}

TEST(HashmapTest, checkInsert)
{
    Hashmap<int, int> hashMap;
    EXPECT_EQ(hashMap.size(), 0);
    EXPECT_TRUE(hashMap.empty());
    
    int insertCount = 10;
    for(int index = 0; index < insertCount; index++) {
        EXPECT_NO_THROW(hashMap.insert({index, index * 2}));
        EXPECT_FALSE(hashMap.empty());
    }
    EXPECT_EQ(hashMap.size(), insertCount);

    EXPECT_NO_THROW(hashMap.erase());
    EXPECT_TRUE(hashMap.empty());
    EXPECT_EQ(hashMap.size(), 0);
}
