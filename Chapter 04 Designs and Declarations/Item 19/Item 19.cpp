#include <iostream>
class T1 {
	int data;
public:
	T1(int i) :data(i) {};
	void print() {
		std::cout << data << std::endl;
	}
};
class T2 {
	int data;
public:
	explicit T2(int i) :data(i) {};
	operator T1(){
		return T1(data);
	}
	
};
int main() {
	T1 t1 = 2015;
	t1.print();
	T2 t2(2017);
	t1 = t2;
	t1.print();
}