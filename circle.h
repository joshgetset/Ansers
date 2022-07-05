#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

class circle
{
public:
	void print();
	void setRadius(double);
	double getRadius();
	double area();
	circle();
	~circle();

private:
	double radius;
};


#endif // CIRCLE_H_INCLUDED
