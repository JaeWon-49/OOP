#include <iostream>
using namespace std;
#include "CarS6.h"
#include "SUVS6.h"
int main()
{
	Car A;
	Car B;
	Car C = A + B;
	cout << A.price << endl;
	cout << B.price << endl;
	cout << C.price << endl;

	return 123;
}