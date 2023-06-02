#include <iostream>
#include "fish.h"
using namespace std;
int main() {
	animal* a[3];
	for (int i = 0; i < 2; i++) a[i] = new fish;
	fish c;
	a[2] = &c;
	c.swim();
	//a[2]->swim();
	((fish*)a[2])->swim();
	return 123;
}
