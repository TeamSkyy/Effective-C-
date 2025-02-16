#include <iostream>
class Widget {
private:
    int data;
public:
    Widget(int i) :data(i) {}
    int size()const {
        return data;
    }
    void normalize() {
        std::cout << "normalize().\n";
    }
    void swap(const Widget& w) {
        std::cout << "swap.\n";
    }
};
Widget someNastyWidget(10);
template<typename T>
void doProcessing(T& w) {
    if (w.size() > 10 && w != someNastyWidget) {
        T temp(w);
        temp.normalize();
        temp.swap(w);
    }
}

bool operator!=(const Widget& w1, const Widget& w2) {
    return w1.size() > w2.size();
}
int main()
{
    Widget w1(20);
    doProcessing(w1);
}
