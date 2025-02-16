#include <iostream>
class B {
public: 
	virtual void f()const {
		std::cout << "Base";
	}
};
class D: public B {
public:
	virtual void f() const override  {
		std::cout << "Derived";
	}
};
int main() {
	D d;
	d.f();
}