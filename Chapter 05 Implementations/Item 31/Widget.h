#pragma once
#include <memory>
class WidgetPimpl;
class Widget
{
private:
	std::shared_ptr<WidgetPimpl> pt;
public:
	Widget();
	~Widget();
	void dosomething();
};

