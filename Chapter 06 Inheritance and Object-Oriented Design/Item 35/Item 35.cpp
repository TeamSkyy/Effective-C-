#pragma once
#include <functional>
#include <cstdio> 
#include <iostream>

class GameCharactor;

int defaultHealthCalc(const GameCharactor& c);

class GameCharactor {
public:
    typedef std::function<int(const GameCharactor&)> HealthCalc;
private:
    HealthCalc hc;
public:
    GameCharactor(HealthCalc h = defaultHealthCalc) : hc(h) {}
    int healthVal() {
        return hc(*this);
    }
};

class EvilBadGuy : public GameCharactor {
public:
    EvilBadGuy(HealthCalc h = defaultHealthCalc) : GameCharactor(h) {}
};

int defaultHealthCalc(const GameCharactor& c) {
    std::cout << "defaultHealthCalc called.\n";
    return 100;
}

struct HealthCalculator {
    int operator()(const GameCharactor& h) const {
        std::cout << "functional object.\n";
        return 0;
    }
};

class GameLevel {
public:
    float health(const GameCharactor& h) {
        std::cout << "Gamelevel::health.\n";
        return 0;
    }
};

int main() {
    EvilBadGuy ev;
    ev.healthVal();
    HealthCalculator hc;
    EvilBadGuy ev2(hc);
    ev2.healthVal();
    GameLevel gl;
    EvilBadGuy ev3(
        std::bind(&GameLevel::health, gl, std::placeholders::_1)
    );
    ev3.healthVal();
    return 0;
}
