#include <iostream>
#include <list>
#include<algorithm>
template<typename T>
class Set {
private:
	std::list<T> rep;
public:
	bool member(const T& item)const;
	void remove(const T& item);
	void insert(const T& item);
	int size()const;
};

template<typename T>
bool Set<T>::member(const T& item) const
{
	return std::find(rep.begin(), rep.end(), item) != rep.end();
}

template<typename T>
void Set<T>::remove(const T& item)
{
	typename std::list<T>::iterator it = std::find(rep.begin(), rep.end(), item);
	if (it != rep.end()) rep.erase(it);
}

template<typename T>
void Set<T>::insert(const T& item)
{
	typename std::list<T>::iterator it = std::find(rep.begin(), rep.end(), item);
	if (it == rep.end()) rep.push_back(item);
}

template<typename T>
int Set<T>::size() const
{
	return rep.size();
}

int main() {
	Set<int> test;
	test.insert(10);
	test.insert(20);
	std::cout << "size: " << test.size() << std::endl;
	test.remove(10);
	std::cout << "size: " << test.size() << std::endl;
}