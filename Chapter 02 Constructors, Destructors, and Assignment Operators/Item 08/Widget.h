#include "Widget.h"
#pragma once
#include <iostream>
#include <vector>
class Widget {
private:
	static int data;
public:
	Widget() {
		puts("Constructing a Widget object.\n");
	}
	inline void Widget::dosomething()
	{
	}
	~Widget() {
		try {
			throw(std::exception("Object destruction error.\n"));//assuming throwing abnormal
		}
		catch(const std::exception& e){
			std::cout << e.what() << std::endl;
		}
		
	}
	void print()const {
		std::cout << ++data << std::endl;
	}
};

void dosomething();
