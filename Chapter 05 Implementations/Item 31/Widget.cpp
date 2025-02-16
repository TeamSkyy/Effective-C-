#include "Widget.h"
#include <vector>
#include <iostream>
class WidgetPimpl {
public:
	void doSomething() {
		std::vector<int> data = { 1,2,3 };
		for (int i : data) {
			std::cout << "Processing data: " << i << std::endl;
		}
	}
};
Widget::Widget():pt(std::make_shared<WidgetPimpl>()){}
Widget::~Widget() = default;
void Widget::dosomething() {
	pt->doSomething();
}
