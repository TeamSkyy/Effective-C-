//#include <iostream>
//#include <vector>
//#include <utility>
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
//	void swap(const widget& w) {
//		std::cout << "calling the swap in widget.\n";
//	}
//};
//namespace std {
//	template<>
//	void swap(widget& a, widget& b) noexcept{
//		std::cout << "calling the customized std::swap\n";
//		a.swap(b);
//	}
//}
//int main() {
//	widget w1;
//	widget w2;
//	using std::swap;
//	std::swap(w1, w2);
//}