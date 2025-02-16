#include <iostream>
#include <string>
class widget {
public:
	explicit widget(int i){
		std::cout << "widget constructor called.\n";
	}
};
void dosomework(const widget& w){}

class window {
private:
	std::string _str;
public:
	const std::string getstr() { return _str; }
	virtual void onResize() {
		_str += "++++++++++++";
		std::cout << "window onresize called.\n";
	}
};
class specialwindow :public window {
public:
	virtual void onResize() {
		//static_cast<window>(*this).onResize();//generated a copy of window
		window::onResize();
		std::cout << "special window onResize called.\n";
		std::cout << getstr() << std::endl;
	}
};
int main() {
	dosomework(widget(15));//called the constructor
	dosomework(static_cast<widget>(15)); //called the constructor

	specialwindow* swp = new specialwindow;
	swp->onResize();
	delete swp;
}