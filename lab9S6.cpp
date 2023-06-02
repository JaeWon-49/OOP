#include <iostream>
using namespace std;
#include "CarS6.h"
int main()
{
	Car a(50, 4, 2000), b(70, 2, 1000), c;
	c = a + b;
	cout << a.speed << " a speed \n" << a.wheels << " a wheels \n" << a.price << " a price \n" << endl;
	cout << b.speed << " b speed \n" << b.wheels << " b wheels \n" << b.price << " b price \n" << endl;
	cout << c.speed << " total speed \n" << c.wheels << " total wheels \n" << c.price << " total price \n" << endl;

}
