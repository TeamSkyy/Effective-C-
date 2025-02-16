#pragma once
#include <string>
#include <iostream>
template <typename T>
class NamedObject2 {
private:
	std::string& nameValue;
	const T ObjectiveValue;
public:
	NamedObject2(std::string& name, const T& value) :nameValue(name), ObjectiveValue(value) {
		std::cout << "string constructor: " << std::endl;
	}
	void print() {
		std::cout << "name:  " << nameValue << ", Value: " << ObjectiveValue << std::endl;
	}
	NamedObject2<T>& operator=(const NamedObject2<T>& no) {
		if (this == &no) {
			return *this;
		}
		nameValue = no.nameValue;
	}
};