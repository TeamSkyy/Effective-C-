#include <iostream>
class Base {
public:
	virtual void print()const {
		std::cout << "Base::print.\n";
	}
};
//class Derived {
//private:
//	int a;
//	Base b;
//public:
//	void print()const {
//		std::cout << "Derived::print.\n";
//	}
//};
class Derived:public Base {
private:
	int a;
public:
	virtual void print()const {
		std::cout << "Derived::print.\n";
	}
};
int main() {
	Base B;
	Derived D;
	std::cout << "sizeof Base: " << sizeof(B) << std::endl;
	std::cout << "sizeof Derived: " << sizeof(D) << std::endl;
}