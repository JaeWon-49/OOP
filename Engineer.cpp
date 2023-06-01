#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price;
}
void Engineer::carspeedChange(Car* xx, float yy) {
	xx->speed = yy;
}
float Engineer::getCarSpeed(Car* x) {
	return x->speed;
}