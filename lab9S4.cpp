#include <iostream>
using namespace std;
#include "CarS4.h"
#include "SUVS4.h"
#include "Engineer.h"
int main(int argc, char*argv[])
{
	SUV* newSUV = new SUV();
	newSUV->setPrice(45000);
	std::cout << "The wheels are " << newSUV->getWheels() << std::endl;
	Engineer engineer;
	std::cout << "Price is " << engineer.getCarPrice(newSUV) << "dollars\n";

	engineer.carspeedChange(newSUV, 100);
	cout << "Change car speed " << engineer.getCarSpeed(newSUV) << endl;
	delete newSUV;

	return 123;
}