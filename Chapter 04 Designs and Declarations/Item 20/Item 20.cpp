#include <string>
#include <iostream>
class window {
private:
    std::string name;
public:
    window(const std::string n) :name(n) {}
    virtual void print() const{
        std::cout << "window.\n";
    }
};
class windowwithscrolls :public window{
public:
    windowwithscrolls(const std::string n):window(n){}
    void print() const {
        std::cout << "windowwithscrolls.\n";
    }
};
void test1(window w){
    w.print();
}
void test2(const window& w) {
    w.print();
}
int main()
{
    windowwithscrolls wws("scrolls");
    test1(wws);
    test2(wws);
}
