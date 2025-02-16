#include "NamedObject.h"
#include "NamedObject2.h"
int main()
{
    NamedObject<int> no1("Smallest Prime Number", 2);
    NamedObject<int> no2(no1);
    no1.print();
    no2.print();

    std::string newDog("Persephone");
    std::string oldDog("Satch");
    NamedObject2<int> p(newDog, 2);
    NamedObject2<int> o(oldDog, 36);
    p = o;
    p.print();
    o.print();
}
