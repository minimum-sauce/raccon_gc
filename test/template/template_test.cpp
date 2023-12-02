extern "C" {
#include "template.h"
}
#include <gtest/gtest.h>

namespace {

TEST(TemplateTest, positive) { EXPECT_EQ(3, addition(1, 2)); }

TEST(TemplateTest, negative) { EXPECT_NE(4, addition(-3, 2)); }

TEST(OtherTest, is_true) { EXPECT_NE(1, 1); }
} // namespace
