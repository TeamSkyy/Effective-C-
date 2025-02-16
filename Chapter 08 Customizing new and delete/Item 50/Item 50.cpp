#include <iostream>
static const int signature= 0xDEBEFF;
typedef unsigned char Byte;
void* operator new(std::size_t size) {
    std::size_t realsize = size + 2 * sizeof(int);
    void* address=malloc(realsize);
    if (!address) throw std::bad_alloc();
    std::cout << "Allocated " << realsize << " bytes.\n";
    *(static_cast<int*>(address)) = signature;
    *(reinterpret_cast<int*>(static_cast<Byte*>(address) + realsize - sizeof(int))) = signature;
    return static_cast<Byte*>(address) + sizeof(int);
}
void operator delete(void* p,std::size_t size) {
    if (
        (*(reinterpret_cast<int*>(static_cast<Byte*>(p)-sizeof(int))) == signature)
        && (*(reinterpret_cast<int*>(static_cast<Byte*>(p) + sizeof(int))) == signature)){
        std::cout << "The signature hasn't been changed.\n";
    }
    free(static_cast<Byte*>(p)-sizeof(int));
}
int main()
{
    int* p = new int;
    delete p;
}
