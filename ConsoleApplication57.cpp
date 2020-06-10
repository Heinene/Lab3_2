#include <stdlib.h>
#include <iostream>
#include "kvad.h"
#include "prya.h"
using namespace std;


int main()
{
	double l, h;
	cout << "length ="; cin >> l;
	cout << "Height="; cin >> h;
	kvad p1(l);
	prya p3(l, h);
	kvad* pp;
	pp = &p3; 
	pp->print();
	return 0;
}