#include "first.hpp"
#include <stdexcept>

InitFirst::InitFirst(/* args */)
{
}

InitFirst::~InitFirst()
{
}

int InitFirst::FindValues(int x, int y, int z)
{
    if((x<20) || (y>30) || (z!=0))
    {
        return -1;
    }

    return 0;
}

int InitFirst::FindAndThrow(int x, int y, int z)
{
    if((x<20) || (y>30) || (z!=0))
    {
        throw std::runtime_error("Given values are not correct");
    }

    return 0;
}
