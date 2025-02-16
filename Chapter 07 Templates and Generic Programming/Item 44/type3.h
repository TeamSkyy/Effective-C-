//#pragma once
//#include <cstddef>
//template<typename T>
//class SuperMatrixBase {
//private:
//	std::size_t size;
//	T* pt;
//public:
//	SuperMatrixBase(T* t, std::size_t n):pt(t), size(n){}
//	void setDataPtr(T* t) {
//		pt = t;
//	}
//	void invert(std::size_t n) {
//		std::cout << n << std::endl;
//	}
//};
//template<typename T, std::size_t n>
//class SuperMatrix :private SuperMatrixBase<T> {
//private:
//	T data[n * n];
//public:
//	SuperMatrix():SuperMatrixBase<T>(data,n){}
//	void invert() {
//		SuperMatrixBase<T>::invert(n);
//	}
//};