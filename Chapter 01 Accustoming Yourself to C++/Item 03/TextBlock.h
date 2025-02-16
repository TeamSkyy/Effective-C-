#pragma once
#include <string>
#include <iostream>
class TextBlock {
private:
	std::string text;
public:
	TextBlock(const std::string& s) :text(s) {}
	const char& operator[](std::size_t position) const { return text[position]; }
	char& operator[] (std::size_t position) { return text[position]; }
};