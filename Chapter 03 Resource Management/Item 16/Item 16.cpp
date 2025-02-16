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
void* operator new(std::size_t size) {
	std::cout << "allocating new memory size： " << size << std::endl;
	return malloc(size);
}
void* operator new[](std::size_t size) {
	std::cout << "allocating new[] memory size： " << size << std::endl;
	return malloc(size);
}
void operator delete(void* p, std::size_t size) {
	std::cout << "deleting memory size： " << size << std::endl;
	free(p);
}
void operator delete[](void* p, std::size_t size) {
	std::cout << "deleting[] memory size： " << size << std::endl;
	free(p);
}
int main() {
	test* p1 = new test;
	delete p1;
	test* p2= new test[3];
	delete[] p2;
}