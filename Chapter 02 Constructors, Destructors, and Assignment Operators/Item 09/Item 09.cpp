#include <iostream>
class Transaction {
public:
	explicit Transaction(const std::string& logInfo) {
		std::cout << "Constructing base\n";
		std::cout << logInfo << std::endl;
	}
};
class BuyTransaction:public Transaction {
public:
	BuyTransaction(const std::string& logInfo):Transaction("BuyTransaction "+ logInfo) {
		std::cout << "Constructing a BuyTransaction object.\n";
	}
};
int main() {
	BuyTransaction bt("Saved successfully.\n");
}