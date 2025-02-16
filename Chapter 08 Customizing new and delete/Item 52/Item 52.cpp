#include <iostream>
void operator delete(void* p, size_t size) {
	std::cout << "Default delete.\n";
	free(p);
}

class Base {
public:
	Base() {
	std::cout << "Constructing Object.\n";
	throw std::exception("can't create object.\n");
}
	static void* operator new(size_t size) {
		std::cout << "Default new.\n";
		void* pt = malloc(size);
		return pt;
	}
	static void* operator new(size_t size, std::ostream&) {
		std::cout << "Placement new.\n";
		void* pt = malloc(size);
		return pt;
	}
	static void operator delete(void* p, std::ostream&) {
		std::cout << "Placement delete.\n";
		if (p == nullptr)return;
		free(p);
	}
	static void operator delete(void* p, size_t size) {
		std::cout << "Default delete.\n";
		free(p);
	}
};
void test(){
	//Base* a = new Base;
	Base* b = new(std::cerr) Base;
	
	//delete b;
}
int main() {
	try {
		test();
	}
	catch (std::exception e) {
		std::cout << e.what();
	}
}