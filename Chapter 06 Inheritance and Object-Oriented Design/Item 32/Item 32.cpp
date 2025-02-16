#include <iostream>
#include <cassert>
class Rectangle {
protected:
	int height = 10;
	int width = 10;
public:
	virtual void setheight(int i) { height = i; }
	virtual void setWidth(int i) { width = i; }
	virtual int getheight()const { return height; }
	virtual int getwidth()const { return width; }
};
void makegigger(Rectangle& r) {
	int oldheight = r.getheight();
	r.setWidth(r.getwidth() + 10);
	assert(r.getheight() == oldheight);
}
class Square :public Rectangle {
public:
	Square(int i) {
		height = width = i;
	}

};
int main() {
	Square s(10);
	assert(s.getwidth() == s.getheight());
	makegigger(s);
	assert(s.getwidth() == s.getheight());
}