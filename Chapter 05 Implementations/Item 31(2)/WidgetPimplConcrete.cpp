#include "WidgetPimplConcrete.h"
#include <iostream>

void WidgetPimplConcrete::setData(int a, double b)
{
	m = a;
	n = b;
}

void WidgetPimplConcrete::displayData() const
{
	std::cout << "a: " << m << " b: " << n << std::endl;
}
