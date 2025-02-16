#include <iostream>
#include <vector>
#include <list>
template <typename T>
void print2nd(const T& container) {
	if (container.size() > 2) {
		typename T::const_iterator iter(container.begin());
		iter++;
		int value = *iter;
		std::cout << value << std::endl;
	}
}
int main() {
	std::vector<int> c1{ 1,2,3 };
	print2nd(c1);
}