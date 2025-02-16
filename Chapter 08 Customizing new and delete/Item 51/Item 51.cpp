#include <iostream>
void errorhandle() {
	std::cout << "out of memory.\n";
}
//global new
void* operator new(size_t size) {
	std::cout << "Global new::Allocating memory. size: " << size << std::endl;
	if (size == 0)size = 1;
	while(true){
		void* pMem = malloc(size);
		if (pMem)return pMem;
		std::new_handler nh = std::get_new_handler();
		if (nh)(*nh)();
		else throw std::bad_alloc();
	}
}
//global delete
void operator delete(void* p, size_t size) {
	std::cout << "Global delete::deleting memory. size: " << size << std::endl;
	if (!p) return;
	free(p);
}

class Base {
public:
	static void* operator new(size_t size) {
		std::cout << "Base new::Allocating memory. size: " << size << std::endl;
		//if (size == 0)size = 1; //Base at least 1 byte
		if (size != sizeof(Base)) return ::operator new(size);

		while (true) {
			void* pMem = malloc(size);
			if (pMem)return pMem;
			std::new_handler nh = std::get_new_handler();
			if (nh)(*nh)();
			else throw std::bad_alloc();
		}
	}
	static void operator delete(void* p, size_t size) {
		std::cout << "Base delete::deleting memory. size: " << size << std::endl;
		if (!p) return;
		if (size != sizeof(Base)) return ::operator delete(p,size);
		free(p);
	}
	virtual ~Base() {
		std::cout << "deconstructing Base.\n";
	}
};
class Derived :public Base {
private:
	int i = 4;
public:
	~Derived() {
		std::cout << "Deconstructing Derived.\n";
	}
};
int main() {
	std::set_new_handler(errorhandle);
	//global new and delete
	/*int* pt = new int;
	double* pd = new double;
	delete pt;
	delete pd;*/

	//in-class new and delete
	Base* pb = new Base;
	Derived* pd = new Derived;
	Base* pe = new Derived;
	delete pb;
	delete pd;
	delete pe;
}