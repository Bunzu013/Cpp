//
// pch.cpp
//

#include "pch.h"

TEST(pierwsza, zlyZakres)
{
	ASSERT_FALSE(pierwsza(-5));
	ASSERT_FALSE(pierwsza(1));
	ASSERT_FALSE(pierwsza(0));
}


TEST(pierwsza, poprawnyZakres)
{
	ASSERT_TRUE(pierwsza(7));
	ASSERT_TRUE(pierwsza(9));
	ASSERT_TRUE(pierwsza(17));
}