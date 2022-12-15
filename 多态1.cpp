#include<iostream>
using namespace std;
class Format {
protected:
	int X, Y;
public:
	virtual void show() = 0;
	virtual double area() = 0;
};

class Point :public Format{
protected:
	int X, Y;
public:
	Point(int x = 0, int y = 0) {
		this->X = x;
		this->Y = y;
		cout << "Point::Point被调用" << endl;
	}
	virtual double area() {
		return 0.0;
	}
	virtual ~Point() {
		cout << "Point::~Point被调用" << endl;
	}
	void show() {
		cout << "X:" << X <<endl;
		cout << "Y:" << Y << endl;
	}
};

class Circle :public Point {
protected:
	int radius;
public:
	Circle(int x = 0, int y = 0, int r = 0):Point(x,y) {
		this->radius = r;
		cout << "Circle::Circle被调用" << endl;
	}
	virtual double area() {
		return 3.14 * radius * radius;
	}
	~Circle() {
		cout << "Ciecle::~Circle被调用" << endl;
	}
	void show() {
		Point::show();
		cout << "radius:" << radius << endl;
	}
};

class Cylinder :public Circle {
protected:
	double height;
public:
	Cylinder(int x, int y, int r, int h) :Circle(x, y, r) {
		height = h;
	}
	double area() {
		return 3.14 * radius * radius * height;
	}
	void show()
	{
		Circle::show();
		cout << "height:" << height << endl;
	}
};

int main()
{
	Point P1(10, 10);
	cout << "P1.area=" << P1.area() << endl;
	Circle C1(10, 10, 20);
	cout << "P2.area=" << C1.area() << endl;
	Point* Pp;
	Pp = &C1;
	cout << "Pp->area=" << Pp->area() << endl;
	Point& Rp = C1;
	cout << "Rp->area=" << Rp.area() << endl;
	cout << "第二节课:" << endl;
	Point* circle = new Circle(10, 10, 25);
	delete circle;
	Cylinder Cy1(10, 10, 20, 10);
	Format* p;
	p = &Cy1;
	p->show();
	cout << "总区域为" << p->area() << endl;
	Circle cir(5, 10, 10);
	Format& cir2 = cir;
	cir2.show();
	system("pause");
	return 0;
}