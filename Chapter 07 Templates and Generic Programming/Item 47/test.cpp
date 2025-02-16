//#include <iostream>
//struct input_iterator_tag {};
//struct output_iterator_tag {};
//struct forward_iterator_tag : public input_iterator_tag {};
//struct bidirectional_iterator_tag : public forward_iterator_tag {};
//struct random_access_iterator_tag : public bidirectional_iterator_tag {};
//
//class List {
//public:
//	class iterator {
//	public:
//		typedef bidirectional_iterator_tag iterator_category;
//	};
//};
//class Deque {
//public:
//	class iterator {
//	public:
//		typedef random_access_iterator_tag iterator_category;
//	};
//};
//template<typename Iter>
//class Iterator_traits {
//public:
//	typedef typename Iter::iterator::iterator_category iterator_category;
//};
//template<typename Iter>
//class Iterator_traits<Iter*> {
//public:
//	typedef typename random_access_iterator_tag iterator_category;
//};
//
//template<typename Iter,typename Dist>
//void doAdvance(Iter i, Dist t, random_access_iterator_tag) {
//	std::cout << "random_access_iterator_tag.\n";
//}
//template<typename Iter, typename Dist>
//void doAdvance(Iter i, Dist t, bidirectional_iterator_tag) {
//	std::cout << "bidirectional_iterator_tag.\n";
//}
//template<typename Iter, typename Dist>
//void Advance(Iter i, Dist t) {
//	doAdvance(i, t, Iterator_traits<Iter>::iterator_category());
//}
//int main() {
//	Deque d;
//	List l;
//	Advance(d, 1);
//	Advance(l, 1);
//	int* i = nullptr;
//	Advance(i, 1);
//}