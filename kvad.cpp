#include "kvad.h"
#include <iostream>
using namespace std;

kvad::kvad(double x) {
	this->l = x;
}


void kvad::print() {
	cout << "length =" << l << endl;

}