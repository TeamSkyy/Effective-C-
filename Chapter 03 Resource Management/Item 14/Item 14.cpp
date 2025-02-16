#include <iostream>
struct Mutex {
    bool islocked;
};
Mutex Mu;
void lock(Mutex* m) {
    m->islocked = true;
    std::cout << "Mutex locked.\n";
}
void unlock(Mutex* m) {
    m->islocked = false;
    std::cout << "Mutex unlocked.\n";
}
class MutexManager {
private:
    std::shared_ptr<Mutex> Mptr;
public:
    MutexManager(Mutex* p):Mptr(p,unlock){
        lock(Mptr.get());
    }
    MutexManager(const MutexManager&) = delete;
    MutexManager& operator=(const MutexManager&) = delete;
    /*~MutexManager() {
        unlock(Mptr.get());
    }*/
};
void test() {
    MutexManager p1(&Mu);
    return;
    //MutexManager p2(p1);
}
int main()
{
    test();
}
