#include <iostream>
class Rational {
private:
    int n, d;
public:
    Rational(int numerator=0, int denominator=1) :n(numerator), d(denominator) {

    }
    /*const Rational operator*(const Rational& r) {
        return Rational(n * r.n, d * r.d);
    }*/
    int getnumerator()const { return n; }
    int getdenominator()const { return d; }
};
//replace by non member function
const Rational operator*(const Rational& lhs, const Rational& rhs) {

    return Rational(lhs.getnumerator() * rhs.getnumerator(), lhs.getdenominator()*rhs.getdenominator());
}
int main()
{
    Rational r1(1, 2);
    Rational r2(1, 4);
    Rational r3;
    r3 = r1 * r2;//allowed
    r3 = r1 * 5;//allowed
    r3 = 3 * r2; //invalid! for member function
    std::cout << "numerator: " << r3.getnumerator() << " denominator: " << r3.getdenominator() << std::endl;
}
