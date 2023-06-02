#include "CarS6.h"
#include <iostream>  //  for cout

Car::Car(float ss, int ww, float pp) {
	speed = ss;
	wheels = ww;
	price = pp;
	std::cout << " new Car \n";
}
void Car::speedUp(float x) { speed += x; }
void Car::speedDown(float x) { speed -= x; }
void Car::setPrice(float x) { price = x; }
float Car::getPrice() { return price; }
void Car::speedChange(float x) {
	if (x > 0) speedUp(x);
	else speedDown(-x);
}
void Car::setWheels(int n) { wheels = n; }
int Car::getWheels() { return wheels; }
void Car::klaxon(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "  no horn \n";
	}
}
Car Car::operator+(Car& car) {
	Car c;
	c.speed = speed + car.speed;
	c.wheels = wheels + car.wheels;
	c.price = price + car.price;
	return c;
}
