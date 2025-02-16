#include <iostream>
using std::cout;
using std::endl;
class TimeKeeper {
public:
	TimeKeeper() {
		cout << "TimeKeeper Constrcutor.\n";
	}
	virtual ~TimeKeeper() {
		cout << "Deleting TimeKeeper.\n";
	}
};
class AtomicClock:public TimeKeeper {
public:
	AtomicClock() {
		cout << "AtomicClock Constrcutor.\n";
	}
	~AtomicClock() {
		cout << "Deleting AtomicClock\n";
	}
};
class WaterClock :public TimeKeeper {
public:
	WaterClock() {
		cout << "WaterClock Constrcutor.\n";
	}
	~WaterClock() {
		cout << "Deleting WaterClock.\n";
	}
};
class WristWatch :public TimeKeeper {
public:
	WristWatch() {
		cout << "WristWatch Constrcutor.\n";
	}
	~WristWatch() {
		cout << "Deleting WristWatch.\n";
	}
};
int main() {
	TimeKeeper* pt;
	pt = new AtomicClock;
	delete pt;
}