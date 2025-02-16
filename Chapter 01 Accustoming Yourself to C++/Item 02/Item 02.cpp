#include "Item 02.h"
#include <iostream>
const int GamePlayer::NumTurns; //Definition of NumTurns
const double CostEstimate::FudgeFactor = 1.35;

void f(int x) {
	std::cout << "Value: " << x << std::endl;
}
#define CALL_WITH_MAX(a,b) f((a)>(b)?(a):(b)); //dont use it
//user template to avoid problem
template<typename T, typename U>
inline void Call_With_MAX(const T& a, const U& b) {
	f(a > b ? a : b);
}
int main() {
	int a = 5, b = 0;
	CALL_WITH_MAX(++a, b); //a is accumulated twice
	CALL_WITH_MAX(++a, b + 10); //a is accumulated once
	Call_With_MAX(++a, b);
}