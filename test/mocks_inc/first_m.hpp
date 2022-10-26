#ifndef _MOCKS_INC_FIRST_HPP_
#define _MOCKS_INC_FIRST_HPP_

#include "gmock/gmock.h"

namespace First_test {

constexpr int xlimit = 20;
constexpr int ylimit = 30;
constexpr int zlimit = 0;

class MockInitFirst {
private:
  /* data */
public:
  MOCK_METHOD(int, FindValues, (int x, int y, int z), ());
  MOCK_METHOD(int, FindAndThrow, (int x, int y, int z), ());
};

} // namespace First

#endif /* _MOCKS_INC_FIRST_HPP_ */
