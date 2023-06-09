#pragma once
#pragma once
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

class queue : public vector <int> {
public:
	// constructor
	queue() : NI(10), NO(20), NC(100) {
		this->reserve(NC);
		totalN = totalOut = 0;
	}
	queue(int ni, int no, int x) : NI(ni), NO(no), NC(x) {
		this->reserve(NC);
		totalN = totalOut = 0;
	}
	// member data
	int NI, NO, NC;
	int totalN, totalOut;
	// member function
	void newin() {
		int n = rand() % NI;
		totalN += n;
		cout << " + " << n << endl;
		for (int i = 0; i < n; i++) this->push_back(rand() % 100);
	}
	void newout() {
		int m = rand() % NO;
		totalOut += m;
		cout << " - " << m << endl;
		for (int i = 0; i < m; i++) {
			if (this->size() != 0) this->erase(this->begin());
		}
	}
};
