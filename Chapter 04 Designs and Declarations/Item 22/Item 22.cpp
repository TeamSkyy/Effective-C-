#include <iostream>
#include "speed.h"
int main()
{
    speedmodule test;
    test.addvalue(10);
    test.addvalue(20);
    test.addvalue(15);
    std::cout << test.getAvgSpeed();
}
