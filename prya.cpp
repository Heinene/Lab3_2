#include "prya.h"
#include <iostream>

using namespace std;

prya::prya (double x, double y) : kvad(x) {
	{
		this->h = y;
		this->P = (x + y) * 2;
	}
}

void prya::print() {

	kvad::print();
	cout << "Height=" << h << endl;; cout << " Perimetr=" << P << endl;

}
