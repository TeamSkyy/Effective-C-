#include <iostream>
class B {
public:
	B() = default;
	void print() {
		std::cout << "B::print.\n";
	}
};
class D:public B {
public:
	D() = default;
	void print() {
		std::cout << "C::print.\n";
	}
};

int main() {
	D d1;
	D* d2 = new D;
	B b1;
	d1.print();
	d2->print();
	B* b2 = &d1;
	b2->print();
	delete d2;
}