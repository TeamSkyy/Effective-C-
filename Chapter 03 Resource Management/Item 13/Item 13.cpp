#include <iostream>
using std::cout;
using std::endl;
class Investment {
public:
	virtual ~Investment() {
		cout << "Deconstructing the base.\n";
	}
};
class StockInvestment :public Investment {
public:
	StockInvestment() {
		cout << "Constructing StockInvestment.\n";
	}
	~StockInvestment() {
		cout << "Deconstructing the StockInvestment.\n";
	}
};
class BondInvestment : public Investment {
public:
	BondInvestment() {
		cout << "Constructing BondInvestment.\n";
	}
	~BondInvestment() {
		cout << "Deconstructing the BondInvestment.\n";
	}
};
void test(){
	cout << "Using unique_ptr.\n";
	std::unique_ptr<Investment> upi1(new StockInvestment);
	//std::unique_ptr<Investment> upi2(upi1);//not allowed
	cout << endl;
	//return;
	cout << "Using shared_ptr.\n\n";
	std::shared_ptr<Investment> spi1(new BondInvestment);
	std::shared_ptr<Investment> spi2(spi1);//allowed
}
int main() {
	test();
}