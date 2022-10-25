#ifndef _FIRST_HPP_
#define _FIRST_HPP_

namespace First {

constexpr int xlimit = 20;
constexpr int ylimit = 30;
constexpr int zlimit = 0;

class InitFirst {
private:
  /* data */
public:
  InitFirst(/* args */) = default;
  ~InitFirst() = default;
  auto static FindValues(int x, int y, int z) -> int;
  auto static FindAndThrow(int x, int y, int z) -> int;
};

} // namespace First

#endif /* _FIRST_HPP_ */
