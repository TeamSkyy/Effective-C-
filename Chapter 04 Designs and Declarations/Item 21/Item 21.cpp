#include <iostream>
class Rational {
private:
    int a, b;
public:
    Rational(int m = 0, int n = 1) :a(m), b(n) {};
   /* Rational operator*(const Rational& r)const {
        return Rational(a * r.a, b * r.b);
    } *///correct

    /*const Rational& operator*(const Rational& r)const {
        Rational temp(a * r.a, b * r.b);
        return temp;
    }*/ //bad code!!
    /*Rational* operator*(const Rational& r)const {
        Rational* temp = new Rational(a * r.a, b * r.b);
        return temp;
    }*/ //bad code!!
    void print()const {
        std::cout << "( " << a << ", " << b << " ).\n";
    }
    friend bool operator==(const Rational& lr, const Rational& rr) {
        return ((lr.a == rr.a) && (lr.b == rr.b));
    }
    friend const Rational& operator*(const Rational& lhs, // bad code!!
        const Rational& rhs) {
        static Rational result; // static obj
        result = Rational(lhs.a * rhs.a, lhs.b * rhs.b);; 
        return result;
    }
};

int main()
{   
    Rational p1(1, 2);
    Rational p2(1, 5);
    Rational p3 = p1 * p2;
    p3.print();

    if ((p1 * p2) == (p2 * p3)) {
        std::cout << "true" << std::endl; //the result will always be right
    }
    else {
        std::cout << "Wrong.\n" << std::endl;
    }
}
