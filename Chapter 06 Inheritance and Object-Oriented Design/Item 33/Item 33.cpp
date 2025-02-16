#include <iostream>
class base {
public:
	virtual void mf1() {
		std::cout << "Base::mf1" << std::endl;
	}
	void mf2() {
		std::cout << "Base::mf2" << std::endl;
	}
	double mf2(int) {
		std::cout << "double Base::mf2(int)" << std::endl;
		return 0;
	}
};
class Derived :public base {
public:
	using base::mf2;
	void mf1() {
		std::cout << "Derived::mf1" << std::endl;
	}
	void mf2() {
		std::cout << "Derived::mf2" << std::endl;
	}
};
class privateDerived :public base {
public:
	void mf1() {
		base::mf1();
		std::cout << "privateDerived::mf1" << std::endl;
	}
	void mf2(int x) {
		base::mf2(x);
		std::cout << "privateDerived::mf2" << std::endl;
	}
};
int main() {
	Derived d;
	d.mf1();
	d.mf2();
	d.mf2(2);

	privateDerived pd;
	pd.mf1();
	pd.mf2(2);
}