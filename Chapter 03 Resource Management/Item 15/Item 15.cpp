#include <iostream>
struct Resource { //C API
    int ID;
    bool isvalid = false;
    int size = 8;
};
Resource* getResource(int i) { //C API
    Resource* r = new Resource;
    r->ID = i;
    r->isvalid = true;
    std::cout << "Acuiring the Resource Object. " << "ID: " << r->ID << std::endl;
    return r;
}
void releaseResource(Resource* r) { //C API
    r->isvalid = false;
    std::cout << "Deleting the Resource Object. " << "ID: " << r->ID << std::endl;
}
class ResourceManager {
    std::shared_ptr<Resource> pt;
public:
    ResourceManager(Resource* r) :pt(r, releaseResource) {
        std::cout << "ResourceManager created.\n";
    }
    Resource& get() { return *pt; }
    operator Resource*() { return pt.get(); }//implicit conversion
};
void changeID(Resource* r, int i) {
    r->ID = i;
    std::cout << "ID changed successfully.\n";
}
int main()
{
    ResourceManager rmana(getResource(123));
    changeID(&rmana.get(), 456);
    ResourceManager rmana2(rmana);
    changeID(rmana, 789);
}
