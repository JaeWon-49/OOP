#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class queue : public vector <int> {
public:
	// constructor
	queue() : NI(10), NO(20), NC(100) {
		reserve(NC);
	}
	queue(int ni, int no, int x) : NI(ni), NO(no), NC(x) {
		reserve(NC);
	}
	// member data
	int NI, NO, NC;
	int lost;
};
