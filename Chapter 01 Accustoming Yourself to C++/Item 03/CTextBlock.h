#pragma once
#include <string>
#include <iostream>
class CTextBlock {
private:
	char* pText;
	//Mutably releases the bitwise constant constraints of non-static member variables:
	mutable std::size_t textlength; //latest txtblock length
	mutable bool LengthThisValid; //check the length validation
public:
	CTextBlock(const std::string s) {
		pText = new char[s.size() + 1];
		strcpy_s(pText, s.size() + 1, s.c_str());
		textlength = 0;
		LengthThisValid = 0;
	}
	char& operator[] (std::size_t position) const { return pText[position]; } //logical constant
	std::size_t length() const;
};
std::size_t CTextBlock::length() const {
	if (!LengthThisValid) {
		textlength = std::strlen(pText); //not allowed in const function
		LengthThisValid = true;//not allowed in const function
	}
	return textlength;
}