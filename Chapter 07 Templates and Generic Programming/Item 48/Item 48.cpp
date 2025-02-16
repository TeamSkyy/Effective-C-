#include <iostream>
unsigned factorial(unsigned n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}
template<unsigned n>
struct factorialTMP {
	//enum { value = n * factorialTMP<n-1>::value };
	static const unsigned value = n * factorialTMP<n - 1>::value;
};
template<>
struct factorialTMP<1> {
	enum { value = 1 };
	//const static unsigned value = 1;
};
int main() {
	std::cout << factorial(5);
	std::cout << factorialTMP<5>::value;
}