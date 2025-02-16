#include <iostream>
template<typename T>
struct TypeInfo {
	static void printinfo() {
		std::cout << "Unknow type.\n";
	}
};
template<>
struct TypeInfo<int> {
	static void printinfo() {
		std::cout << "type int.\n";
	}
};
template<>
struct TypeInfo<double> {
	static void printinfo() {
		std::cout << "type double.\n";
	}
};

int main() {
	TypeInfo<int>::printinfo();
	TypeInfo<double>::printinfo();
	TypeInfo<float>::printinfo();
}