#include <iostream>
#include <cmath>
#include "cone.h"
using namespace std;

void cone::print()
{
    cout << "Cone: " <<endl;
    cout<< "\tVolume: " << volume() << endl;
    cout<< "\Area: " << cone::area() << endl;
}

void cone::setHeight(double h)
{
    height = h;
}

double cone::getHeight()
{
    return height;
}

double cone::area()
{
    double a;
    double temp:

    temp = getRadius() + sqrt(pow(height, 2) + pow(getRadius(), 2));
        a = (M_PI * getRadius()) * temp;

        return a;
}

double cone::volume()
{
    double vol;

    vol = (M_PI * pow(getRadius(), 2) * height) / 3;

    return vol;
}

cone::cone()
{
    height = 0;
}

cone::~cone()
{}
