#include <string>
#include <iostream>
class point {
private:
	int x;
	int y;
public:
	point(int m, int n) :x(m), y(n) {};
	point(){}
	void setX(int m) { x = m; }
	void setY(int n) { y = n; }
	void ToString()const {
		std::cout << "(" << x << ", " << y << ") \n";
	}
};
struct RectData {
	point upperleft;
	point lowerright;
};
class Rectangle {
private:
	std::shared_ptr<RectData> pt;
public:
	Rectangle(const point& p1, const point& p2) {
		RectData* p = new RectData;
		p->upperleft = p1;
		p->lowerright = p2;
		pt = std::make_shared<RectData>(*p);
	}
	const point& returnUpperLeft()const { return pt->upperleft; }
	const point& returnLowerRight()const { return pt->lowerright; }
	//or
	/*point returnUpperLeft()const { return pt->upperleft; }
	point returnLowerRight()const { return pt->lowerright; }*/
};
point coordin1(0, 0);
point coordoin2(100, 100);
int main() {
	Rectangle test(coordin1, coordoin2);
	test.returnLowerRight().ToString();
	//test.returnLowerRight().setX(50); //not allowed
	test.returnLowerRight().ToString();
}