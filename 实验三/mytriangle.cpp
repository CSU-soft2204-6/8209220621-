#include<iostream>
#include<cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if ((side1 > 0 && side2 > 0 && side3 > 0) && ((side1 + side2 > side3)&& (side2 + side3 > side1) && (side1 + side3 > side2)))
		return true;
	else
		return false;
}
double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return area;
}