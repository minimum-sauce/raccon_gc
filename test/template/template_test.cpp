extern "C" {
#include "template.h"
}
#include <gtest/gtest.h>

namespace {

TEST(Template, positive) { EXPECT_EQ(3, addition(1, 2)); }

TEST(Template, negative) { EXPECT_NE(4, addition(-3, 2)); }

TEST(Other, is_true) { EXPECT_NE(1, 1); }
} // namespace
