#ifndef kvad_h
#define kvad_h

#include <stdio.h>


class kvad
{
protected:
	double l;
public:
	kvad(double x);
	virtual void print();
};

#endif /* kvad_h */