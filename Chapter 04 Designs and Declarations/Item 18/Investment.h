#pragma once
#include <iostream>
class Investment {
public:
	virtual ~Investment() = 0;
};
Investment::~Investment() {
	std::cout << "AFWEQGEWGWEG";
}
class StockInvestment:public Investment {
public:
	StockInvestment() {
		std::cout << "Creating StockInvestment.\n";
	}
	~StockInvestment() {
		std::cout << "Deleting StockInvestment.\n";
	}
};
inline void getridofInvestment(Investment* pi) {
	delete pi;
}
inline std::shared_ptr<Investment> createInvestment() {
	std::shared_ptr<Investment> returnValue(nullptr,getridofInvestment);
	returnValue = std::shared_ptr<Investment>(new StockInvestment);
	return returnValue;
}