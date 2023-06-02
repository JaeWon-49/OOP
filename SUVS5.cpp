#include "SUVS5.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}
void SUV::muffsound(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "modified sound\n";
		std::cout << "modified sound\n";
	}
}