#pragma once
#include <string>
#include <iostream>
template <typename T>
class NamedObject {
private:
	std::string nameValue;
	T ObjectiveValue;
public:
	NamedObject(const char* name, const T& value):nameValue(name),ObjectiveValue(value) {
		std::cout << "char* constructor: " << std::endl;
		
	}
	NamedObject(const std::string& name, const T& value) :nameValue(name), ObjectiveValue(value) {
		std::cout << "string constructor: " << std::endl;
	}
	void print() {
		std::cout << "name:  " << nameValue << ", Value: " << ObjectiveValue << std::endl;
	}
	void operator=(const NamedObject& no) {
		nameValue = no.nameValue;
	}
};