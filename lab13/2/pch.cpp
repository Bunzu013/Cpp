//
// pch.cpp
//

#include "pch.h"
TEST(odwrotna, dodatnie) {
    ASSERT_EQ(odwrotna(4), 0.25);
    ASSERT_EQ(odwrotna(3), 0.25);
}

TEST(odwrotna, ujemne) {
    ASSERT_EQ(odwrotna(-2), -0.5);
}

TEST(odwrotna, ThrowWhenZero) {
    ASSERT_THROW(odwrotna(0.0), std::invalid_argument);
}