#include <iostream>
class Base {
public:
	enum colors{red,yellow,blue};
	void print(colors c = red) {
		realprint(c);
	}
private:
	virtual void realprint(colors c) {
		std::cout << "Base:: " << c << std::endl;
	}
};
class Derived :public Base {
public:
	virtual void realprint(colors c) {
		std::cout << "Derived:: " << c << std::endl;
	}
};
int main() {
	Base b1;
	Derived d1;
	Base* b2 = &d1;
	b1.print();//Base:: 0
	d1.print();//Derived:: 2
	b2->print(); //Derived:: 0(base)
}