#include <iostream>
class Airport{};
class Airplane {
public:
	virtual void fly(const Airport& destination) = 0{
		std::cout << "Airplance::fly.\n";
	}
//protected:
//	void defaultfly() {
//		puts("default fly.\n");
//	}
};
class ModelA :public Airplane {
public:
	void fly(const Airport& destination) {
		//defaultfly();
		Airplane::fly(destination);
		std::cout << "ModelA::fly.\n";
	}
};
class ModelB :public Airplane {
public:
	void fly(const Airport& destination) {
		//defaultfly();
		Airplane::fly(destination);
		std::cout << "ModelB::fly.\n";
	}
};
class ModelC :public Airplane {
public:
	void fly(const Airport& destination) {
		puts("Model C.\n");
		puts("special fly.\n");
	}
};
int main() {
	Airport a;
	Airplane* ma = new ModelA;
	Airplane* mc = new ModelC;
	ma->fly(a);
	mc->fly(a);
}