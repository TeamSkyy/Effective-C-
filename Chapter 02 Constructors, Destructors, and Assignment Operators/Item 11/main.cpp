#include <iostream>
#include <vector>
class Bitmap {
public:
    std::vector<int> data;
public:
    Bitmap(int a) {
        for (int i = 0; i < a; i++)
        {
            data.push_back(i);
        }
    }
};
class Widget {
private:
    Bitmap* pt;
public:
    Widget(Bitmap* pd) :pt(pd) {}
    ~Widget() { delete pt; }
    Widget& operator=(const Widget& w) {
        Bitmap* Borigin = pt;
        pt = new Bitmap(*w.pt); //if something wrong with new Bitmap, pt stays the same
        delete Borigin;
        return *this;
    }
    void print()const {
        for (const auto& x : pt->data) {
            std::cout << x << std::endl;
        }
    }
};
int main()
{
    Widget w1(new Bitmap(2));
    Widget w2(new Bitmap(5));
    std::cout << "Before = \n";
    w1.print();
    std::cout << "After = \n";
    //w1 = w2;
    w1 = w1;
    w1.print();
}
