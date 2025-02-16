#pragma once
#include "WidgetImpl.h"
class WidgetPimplConcrete:public WidgetImpl
{
private:
	int m;
	int n;
public:
	virtual void setData(int a, double b);
	virtual void displayData()const;
};

