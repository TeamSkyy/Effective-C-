//#include <iostream>
//struct input_iterator_tag {};
//struct output_iterator_tag {};
//struct forward_iterator_tag : public input_iterator_tag {};
//struct bidirectional_iterator_tag : public forward_iterator_tag {};
//struct random_access_iterator_tag : public bidirectional_iterator_tag {};
//
//class Deque {
//public:
//	class iter {
//	public:
//		typedef random_access_iterator_tag iterator_category;
//	};
//};
//class List {
//public:
//	class iter {
//	public:
//		typedef bidirectional_iterator_tag iterator_category;
//	};
//};
//
//template<typename Iter>
//struct iterator_trais {
//	typedef typename Iter::iter::iterator_category iterator_category;
//};
//template<typename Iter>
//struct iterator_trais<Iter*> {
//	typedef random_access_iterator_tag iterator_category;
//};
//template<typename Iter,typename distance>
//void doAdvance(Iter i, distance d, random_access_iterator_tag) {
//	std::cout << "random_access_iterator_tag\n";
//}
//template<typename Iter, typename distance>
//void doAdvance(Iter i, distance d, bidirectional_iterator_tag) {
//	std::cout << "bidirectional_iterator_tag.\n";
//}
//template<typename Iter, typename distance>
//void Advance(Iter i, distance d) {
//	doAdvance(i, d, iterator_trais<Iter>::iterator_category());
//}
//int main() {
//	Deque d;
//	List l;
//	Advance(d, 1);
//	Advance(l, 1);
//}