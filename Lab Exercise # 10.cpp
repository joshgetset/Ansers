#include <iostream>
#include "circle.h"
#include "cone.h"
#include "circleImp.cpp"
#include "coneImp.cpp"
using namespace std;

int main()
{
    circle c;
    c.setRadius(10);
    c.print();
    cone cn();
    cn.setRadius(15);
    cn.setHeight(20);
    cn.print();
}
