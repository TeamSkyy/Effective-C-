//#include <iostream>
//#include "template.h"
//void error() {
//	std::cout << "error occured.\n";
//	std::abort();
//}
//class newErrorHandler {
//private:
//	std::new_handler oldhandler;
//	newErrorHandler(const newErrorHandler&) = delete;
//	newErrorHandler& operator=(const newErrorHandler&) = delete;
//public:
//	newErrorHandler(std::new_handler nh) :oldhandler(nh) {}
//	~newErrorHandler() { std::set_new_handler(oldhandler); }
//};
//class Widget {
//private:
//	static std::new_handler currentHandler;
//public:
//	static std::new_handler set_new_handler(std::new_handler p);
//	static void* operator new(std::size_t n);
//};
//std::new_handler Widget::currentHandler = nullptr;
//
//std::new_handler Widget::set_new_handler(std::new_handler p)
//{
//	std::new_handler oldhandler = currentHandler;
//	currentHandler = p;
//	return oldhandler;
//}
//
//void* Widget::operator new(std::size_t size)
//{
//	newErrorHandler neh(std::set_new_handler(currentHandler));
//	return ::operator new(size);
//}
//int main() {
//	Widget::set_new_handler(error);
//	try {
//		while (true) {
//			Widget* p = new Widget[1000000L]; 
//			std::cout << "Allocated successfully\n";
//		}
//	}
//	catch (const std::bad_alloc& e) {
//		std::cout << "Caught std::bad_alloc: " << e.what() << std::endl;
//	}
//
//	
//}