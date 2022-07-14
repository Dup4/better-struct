#include "gtest/gtest.h"

#include "better-struct/macros_utility.h"

class MacrosUtilityTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(MacrosUtilityTest, nargs_test) {
    EXPECT_EQ(__BETTER_STRUCT_NARGS(1), 1);
    EXPECT_EQ(__BETTER_STRUCT_NARGS(1, 2), 2);
}
