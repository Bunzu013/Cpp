//
// pch.h
//

#pragma once

#include "gtest/gtest.h"

double odwrotna(double x)
{
    if (x == 0)
        throw std::invalid_argument("Podano liczbe 0");
    return 1 / x;
}