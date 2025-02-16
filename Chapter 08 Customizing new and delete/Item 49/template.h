#pragma once
#include <new>

class newErrorHandler {
private:
	std::new_handler oldhandler;
	newErrorHandler(const newErrorHandler&) = delete;
	newErrorHandler& operator=(const newErrorHandler&) = delete;
public:
	newErrorHandler(std::new_handler nh) :oldhandler(nh) {}
	~newErrorHandler() { std::set_new_handler(oldhandler); }
};
template<typename T>
class newHandler {
private:
	static std::new_handler currenthandler;
public:
	static void* operator new(std::size_t size)throw(std::bad_alloc);
	static std::new_handler set_new_handler(std::new_handler nh);
};

template<typename T>
inline void* newHandler<T>::operator new(std::size_t size) throw(std::bad_alloc)
{	
	newErrorHandler h(std::set_new_handler(currenthandler));
	return ::operator new(size);
}

template<typename T>
inline std::new_handler newHandler<T>::set_new_handler(std::new_handler nh)
{
	std::new_handler oldhandler = currenthandler;
	currenthandler = nh;
	return oldhandler;
}
template<typename T>
std::new_handler newHandler<T>::currenthandler = nullptr;