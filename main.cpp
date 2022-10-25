#include <iostream>
#include "first.hpp"


int main()
{
    InitFirst first_itf;    

    auto return_value = first_itf.FindValues(10,20,0);
    std::cout << return_value << '\n';   
    

    return 0;
}
