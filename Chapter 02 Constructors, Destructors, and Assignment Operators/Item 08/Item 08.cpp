#include "Widget.h"
#include "DBConnect.h"
int Widget::data = 0;
void dosomething() {
	std::vector<Widget> v(10);
	for (const auto& item : v) {
		item.print();
	}
}
void connecttest() {
	DBConn test(DBConnection().create());
	//test.~DBConn();
	test.close();
}
int main() {
	//dosomething();
	connecttest();
}