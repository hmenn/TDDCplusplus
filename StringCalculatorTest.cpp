//
// Created by Yildirim Adiguzel on 2018-12-19.
//

#include "StringCalculatorTest.h"
#include <gtest/gtest.h>
#include "StringCalculator.h"


TEST(it_should_zero_onn_empty_string, Criteria1) {
    std::string text("");

    int result = StringCalculator::calculate(text);

    EXPECT_EQ(result, 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
