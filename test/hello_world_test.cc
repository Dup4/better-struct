#include "gtest/gtest.h"

class HelloWorldTest : public testing::Test {
protected:
    virtual void SetUp() override {}
};

TEST_F(HelloWorldTest, hello_world_test) {
    EXPECT_EQ("Hello World", "Hello World");
}
