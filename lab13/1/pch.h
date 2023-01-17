//
// pch.h
//

#pragma once

#include "gtest/gtest.h"

bool pierwsza(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}