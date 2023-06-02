#pragma once
#include "ani.h"
using namespace std;
class fish : public animal {
public:
	fish() : nPins(4) { };
	int nPins;
	void swim() { cout << " I swim! \n"; }
};
