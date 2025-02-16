#include "Widget.h"
#include "WidgetPimplConcrete.h"
Widget2::Widget2():pt(std::make_shared<WidgetPimplConcrete>())
{
}
Widget2::~Widget2() {

}
void Widget2::setData(int a, double b) {
	pt->setData(a, b);
}
void Widget2::displayData()const {
	pt->displayData();
}