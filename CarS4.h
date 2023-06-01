#pragma once
class Car {
protected:
	float price;
	void speedUp(float);
	void speedDown(float);
public:
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);

	friend class Engineer;
};