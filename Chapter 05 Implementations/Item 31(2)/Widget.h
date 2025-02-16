#pragma once
#include <memory>
class WidgetImpl;
class Widget2
{
private:
	std::shared_ptr<WidgetImpl> pt;
public:
	Widget2();
	~Widget2();
	void setData(int a, double b);
	void displayData()const;
};

