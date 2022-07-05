#include "circle.h"
#ifndef CONE_H_INCLUDED
#define CONE_H_INCLUDED

class cone:public circle
{
public:
	void print();
	void setHeight(double);
	double getHeight();
	double area();
	double volume();
	cone();
	~cone();

private:
	double height;
};



#endif // CONE_H_INCLUDED
