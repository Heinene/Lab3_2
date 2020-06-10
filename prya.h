#ifndef prya_h
#define prya_h

#include <stdio.h>
#include "kvad.h"

class prya : public kvad
{
	double h;
	double P;
public:

	prya(double x, double y);

	void print();
};

#endif /* prya_h */