//#include <iostream>
//#include <vector>
//class widgetimp {
//private:
//	int a, b, c;
//	std::vector<int> vessel;
//public:
//	widgetimp() {
//		std::cout << "constructing widgetimp.\n";
//	}
//	~widgetimp() {
//		std::cout << "deconstructing widgetimp.\n";
//	}
//};
//class widget {
//	widgetimp* pt;
//public:
//	widget() :pt(new widgetimp) {}
//	widget(const widget& w) :pt(new widgetimp) {
//		*pt = *w.pt;
//		std::cout << "widget(const widget& w) :pt(new widgetimp)\n";
//	}
//	widget& operator=(const widget& w) {
//		*pt = *w.pt;
//		std::cout << "widget& operator=(const widget& w)\n";
//		return *this;
//	}
//	~widget() {
//		std::cout << "deconstructing widget.\n";
//	}
//};
//int main() {
//	widget w1;
//	widget w2;
//	std::swap(w1, w2);
//}