#include <iostream>
using namespace std;
#include "CarS6.h"
int main()
{
	Car A = Car();
	Car B = Car();
	Car C = A + B;
	cout << A.price << " " << A.speed << endl;
	cout << B.price << " " << B.speed << endl;
	cout << C.price << " " << C.speed << endl;

	return 123;
}
