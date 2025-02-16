#include <iostream>
template<typename T>
class Rational;
template<typename T> 
const Rational<T> doMultiply(const Rational<T>& lhs, const Rational<T>& rhs) {
	return Rational<T>(lhs.getNumerator() * rhs.getNumerator(),
		lhs.getDenominator() * rhs.getDenominator());
}
template<typename T>
class Rational {
private:
	T numerator;
	T denominator;
public:
	Rational(T n = 0, T d = 1) :numerator(n), denominator(d) {}
	void show()const {
		std::cout << numerator << "/" << denominator << std::endl;
	}
	T getNumerator() const { return numerator; }
	T getDenominator() const{ return denominator; }
	friend const Rational<T> operator*(const Rational<T>& lhs, const Rational<T>& rhs) {
		return doMultiply(lhs,rhs);
	}
};


int main() {
	Rational<int> R1(1, 2);
	Rational<int> R2(1, 4);
	Rational<int> R3 = 2 * R2;
	R3.show();
}