#include <iostream>
class test {
	int i = 5;
public:
	test() {
		std::cout << "Creating the object.\n";
	}
	virtual ~test() {
		std::cout << "Deleting the object.\n";
	}
};
int errorFunc() {
	throw(std::exception("Error."));
	return 0;
}
void testFunc(std::shared_ptr<test> spt, int i) {
	std::cout << "Test.\n";
}
int main() {
	//testFunc(new test, errorFunc()); //type mismatch
	try {
		testFunc(std::shared_ptr<test>(new test), errorFunc());//Resource leak
		std::shared_ptr<test> pt(new test);
		testFunc(pt, errorFunc());
	}
	catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	
}