#include <iostream>
//#include "type3.h"
#include "type4.h"
int main() {
	SuperMatrix<int, 5> sm5;
	SuperMatrix<int, 10> sm10; //2 different instance
	sm5.invert();
	sm10.invert();
}