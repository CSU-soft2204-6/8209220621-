#include<iostream>
#include<cmath>
using namespace std;
/*class Shape {
public:
	virtual double area() = 0;
};
class Circle :public Shape {
private:
	double radius;
public:
	Circle(double r)
	{
		radius = r;
	}
	double area()
	{
		return 3.14 * pow(radius, 2);
	}
};
class Square :public Shape{
private:
	double side;
public:
	Square(double s)
	{
		side = s;
	}
	double area()
	{
		return pow(side, 2);
	}
};
class Rectangle :public Shape{
private:
	double width;
	double length;
public:
	Rectangle(double w, double l)
	{
		width = w;
		length = l;
	}
	double area()
	{
		return width * length;
	}
};
class Trapezoid :public Shape{
private:
	double top;
	double bottom;
	double height;
public:
	Trapezoid(double t, double b, double h)
	{
		top = t;
		bottom = b;
		height = h;
	}
	double area()
	{
		return 1 / 2 * (top + bottom) * height;
	}
};
class Triangle :public Shape{
private:
	double side1;
	double side2;
	double side3;
public:
	Triangle(double a, double b, double c)
	{
		side1 = a;
		side2 = b;
		side3 = c;
	}
	double area()
	{
		double t = (side1 + side2 + side3)/2;
		return sqrt(t*(t - side1)*(t - side2)*(t - side3));
	}
};
int main()
{
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	Shape* shapearr[5] = {&circle, &square,&rectangle,&trapezoid,&triangle};
	double area_sum=0;
	for (int i = 0; i < 5; i++)
	{
		area_sum += shapearr[i]->area();
		cout << shapearr[i]->area() << endl;
	}
	cout << area_sum;
	return 0;
}*/