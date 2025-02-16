#include <iostream>
#include "Investment.h"
struct Year {
	int val;
	explicit Year(int i):val(i){}
};
//struct Month {
//	int _month;
//	explicit Month(int i) :_month(i) {}
//};
struct Day {
	int val;
	explicit Day(int i) :val(i) {}
};
//class Month {
//private:
//	int val;
//	Month(int i):val(i) {}
//public:
//	static Month Jan() { return Month(1); }
//	static Month Feb() { return Month(2); }
//	//...//
//	static Month Dec() { return Month(12); }
//};
class Date {
public:
	enum class Month {
		Jan = 1, Feb = 2, Dec = 12
	};
private:
	Day _day;
	Month _month;
	Year _year;
public:
	Date(const Year& y, const Month& m, const Day& d) :
		_year(y), _month(m), _day(d) {
		std::cout << "Creating date.\n";
	};
	
};

int main() {
	//Date d1(Year(2012), Month::Dec(), Day(12));//static member;
	Date d2(Year(2014), Date::Month::Jan, Day(7));//enum class;
	std::shared_ptr<Investment> pt = createInvestment();
}