//
// Created by hourann on 18-7-20.
//
#include "gtest/gtest.h"
#include "solution.h"

TEST(FOO, BAR){
    EXPECT_EQ(add(2, 2), 4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
