#include <iostream>
class top{};
class mid:public top{};
class bottom:public top{};
template<typename T>
class smartptr {
private:
	T* heldptr;
public:
	smartptr(const smartptr<T>& ptr) :heldptr(ptr) {
		std::cout << "copy constructor.\n";
	}
	explicit smartptr(T* ptr) :heldptr(ptr) {
		std::cout << "constructor.\n";
	}
	T* get()const { return heldptr; }
	template<typename U>
	smartptr(const smartptr<U>& u) : heldptr(u.get()) {
		std::cout << "Generic constructor.\n";
	}
};
int main() {
	/*smartptr<top> t1 = smartptr<mid>(new mid);
	smartptr<top> t2 = smartptr<bottom>(new bottom);
	smartptr<top> t3 = smartptr<top>(new top);
	smartptr<const top> t4 = t3;*///from top to const top
	smartptr<mid> t5 = smartptr<bottom>(new bottom);
}