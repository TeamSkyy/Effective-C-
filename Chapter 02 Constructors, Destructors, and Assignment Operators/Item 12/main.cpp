#include <iostream>
#include <string>
class base {
private:
    std::string info;
public:
    base(const std::string s) :info(s) {}
    base(const base& b):info(b.info){}
    base& operator=(const base& b) {
        info = b.info;
        return *this;
    }
    void show()const {
        std::cout << "info: " << info << std::endl;
    }
};
class derived : public base {
private:
    int a;
public:
    derived(const std::string s,int b) :a(b),base(s) {}
    derived(const derived& d) :a(d.a),base(d) {} //dont forget to initialize the base 
    derived& operator=(const derived& d) {
        a = d.a;
        base::operator=(d);
        return *this;
    }
    void show()const {
        base::show();
        std::cout << "number: " << a << std::endl;
    }
};
int main()
{
    derived d1("Hello everyone", 2);
    derived d2("Bye bye", 5);
    d1.show();
    d2.show();

    d1 = d2;
    std::cout << "After equation.\n";
    d1.show();
    d2.show();
}
