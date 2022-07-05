#include <iostream>
#include "circle.h"
using namespace std;

void circle::print()
{
    cout<< "Circle: "<<endl;
    cout<< "\tRadius: "<< radius << endl;
    cout<< "\tArea: " << circle::area() << endl;
}

void circle::setRadius(double r)
{
    radius = r;
}

double circle::getRadius()
{
    return radius;
}

double circle::area()
{
    double a;
    a = 3.14 * (radius + radius);
    return a;
}

circle::circle()
{
    radius = 0;
}

circle::~circle()
{}
