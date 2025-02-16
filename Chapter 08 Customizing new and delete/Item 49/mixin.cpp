#include "template.h"
#include <iostream>
void error() {
	std::cout << "error occured.\n";
	std::abort();
}
class WidgetImp :private newHandler<WidgetImp> {
public:
	static void sethandler(std::new_handler nh) {
		set_new_handler(nh);
	}
};
int main() {
	WidgetImp::sethandler(error);
	try {
		while (true) {
			WidgetImp* p = new WidgetImp[1000000L];
			std::cout << "Allocated successfully\n";
		}
	}
	catch (const std::bad_alloc& e) {
		std::cout << "Caught std::bad_alloc: " << e.what() << std::endl;
	}


}