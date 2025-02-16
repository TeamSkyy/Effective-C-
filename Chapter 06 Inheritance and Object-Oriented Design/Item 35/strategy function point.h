//#pragma once
////Different instances of the same role can have different calculation methods
//class GameCharacter;
//int defaultHealthCalc(const GameCharacter& gc);//forward declration
//class GameCharacter {
//public:
//	typedef int (*HealthCalc)(const GameCharacter&);
//	explicit GameCharacter(HealthCalc pt = defaultHealthCalc) :hc(pt) {}
//	int healthVal() {
//		return hc(*this);
//	}
//private:
//	HealthCalc hc;
//};
//class EvilBadGuy:public GameCharacter {
//public:
//	EvilBadGuy(HealthCalc pt) :GameCharacter(pt) {}
//};
//int losehealquickly(const GameCharacter& gc);
//int losehealslowly(const GameCharacter& gc);
////example
//EvilBadGuy dgc1(losehealquickly);
//EvilBadGuy dgc2(losehealslowly);//argument can be customized function