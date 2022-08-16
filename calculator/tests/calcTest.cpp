#include <gtest/gtest.h>
#include "calc/Calc.h"

TEST(TestSuitSample, TestSample){
		Calc calc;
        ASSERT_EQ(calc.add(12,1),13);
}