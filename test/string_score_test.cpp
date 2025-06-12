#include <gtest/gtest.h>
#include "../src/string_score.h"

TEST(StringScoreTest, Example1) {
    std::vector<std::string> strs = {"alic3", "bob", "3", "4", "00000"};
    EXPECT_EQ(maximumValue(strs), 5);
}

TEST(StringScoreTest, Example2) {
    std::vector<std::string> strs = {"1", "01", "001", "0001"};
    EXPECT_EQ(maximumValue(strs), 1);
}

TEST(StringScoreTest, EmptyArray) {
    std::vector<std::string> strs = {};
    EXPECT_EQ(maximumValue(strs), 0);
}

TEST(StringScoreTest, SingleLetter) {
    std::vector<std::string> strs = {"a"};
    EXPECT_EQ(maximumValue(strs), 1);
}

TEST(StringScoreTest, SingleNumber) {
    std::vector<std::string> strs = {"123"};
    EXPECT_EQ(maximumValue(strs), 123);
}

TEST(StringScoreTest, MixedStrings) {
    std::vector<std::string> strs = {"hello123", "999", "world"};
    EXPECT_EQ(maximumValue(strs), 999); // "999" is the largest value
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
