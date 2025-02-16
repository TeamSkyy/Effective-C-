#pragma once
#include <vector>
#include <iostream>
class speedmodule {
private:
	std::vector<int> speeddata;
	double averagespeed;
public:
	void addvalue(int i) {
		speeddata.push_back(i);
	}
	double getAvgSpeed() {
		double total = 0.0;
		for (const auto& x : speeddata) {
			total += x;
		}
		averagespeed = total / speeddata.size();
		return averagespeed;
	}
};