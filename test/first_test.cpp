#include <gtest/gtest.h>

#include "mocks_inc/first_m.hpp"

using ::testing::_;
using ::testing::Return;
using ::testing::StrictMock;

TEST(firstTest, trial) {
  EXPECT_TRUE( 1 == 1 );
}

TEST(firstTest, FindValues) {
    First_test::MockInitFirst newObj;

    EXPECT_CALL(newObj, FindValues).WillOnce(Return(0));

    newObj.FindValues(10,20,30);
    
}
