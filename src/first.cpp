#include "first.hpp"
#include <stdexcept>

auto First::InitFirst::FindValues(int x, int y, int z) -> int {
  if ((x < First::xlimit) || (y > First::ylimit) || (z != First::zlimit)) {
    return -1;
  }

  return 0;
}

auto First::InitFirst::FindAndThrow(int x, int y, int z) -> int {
  if ((x < First::xlimit) || (y > First::ylimit) || (z != First::zlimit)) {
    throw std::runtime_error("Given values are not correct");
  }

  return 0;
}
