#include <iostream>
class test {
private:
	int data;
public:
	test(int a):data(a){}
	int getdata()const { return data; }
	operator int() { return data; }
	test operator+(const test& t) {
		return test(data + t.data);
	}
	test operator+(int a) {
		return test(data + a);
	}
	test& operator=(const test& t) {
		data = t.data;
		return *this;
	}
	test& operator+=(const test& t) {
		data += t.data;
		return *this;
	}
	int operator()() {
		return data;
	}
	test& operator++() {
		data += 1;
		return *this;
	}
	const test operator++(int n) {
		test temp(*this);
		operator++();
		return temp;
	}
	friend std::ostream& operator<<(std::ostream& os, const test& t) {
		os << t.data;
		return os;
	}
};
int main() {
	test a(1);
	test b(3);
	test c(5);
	a = b = c;
	std::cout << a++ << ++b << (c += 10) << std::endl;
}