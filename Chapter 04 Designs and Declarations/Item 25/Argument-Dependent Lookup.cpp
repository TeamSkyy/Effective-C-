#include <iostream>
#include <vector>
#include <utility>
namespace mylib {
	template<typename T>
	class widgetimp {
	private:
		int a, b, c;
		std::vector<int> vessel;
	public:
		widgetimp<T>() {
			std::cout << "constructing widgetimp.\n";
		}
		~widgetimp<T>() {
			std::cout << "deconstructing widgetimp.\n";
		}
	};
	template<typename T>
	class widget {
		widgetimp<T>* pt;
	public:
		widget<T>() :pt(new widgetimp<T>) {}
		widget<T>(const widget& w) : pt(new widgetimp<T>) {
			*pt = *w.pt;
			std::cout << "widget(const widget& w) :pt(new widgetimp)\n";
		}
		widget<T>& operator=(const widget& w) {
			*pt = *w.pt;
			std::cout << "widget& operator=(const widget& w)\n";
			return *this;
		}
		~widget<T>() {
			std::cout << "deconstructing widget.\n";
		}
		void swap(const widget<T>& w) {
			std::cout << "calling the swap in widget.\n";
		}
		friend void swap(widget<T>& a, widget<T>& b) noexcept {
			std::cout << "calling the customized swap in mylib\n";
			std::swap(a.pt, b.pt);
		}
	};

}
int main() {
	//using namespace mylib;
	mylib::widget<int> w1;
	mylib::widget<int> w2;
	using std::swap;
	swap(w1, w2);
}