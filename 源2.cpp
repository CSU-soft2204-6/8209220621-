#include<iostream>
using namespace std;
class Complex {
public:
	double real;
	double image;
public:
	Complex()
	{
		real = 0;
		image = 0;
	}
	Complex(double r, double i)
	{
		real = r;
		image = i;
	}
	void display()
	{
		cout << real << '+' << image << 'i' << endl;
	}
	friend Complex operator +(Complex A, Complex B)
	{
		return Complex(A.real + B.real, A.image + B.image);
	}
	friend Complex operator ++(Complex& A)
	{
		return Complex(A.real++, A.image);
	}
	friend Complex operator ++(Complex& A, int a)
	{
		return Complex(A.real++, A.image);
	}
	Complex operator -(Complex B)
	{
		return Complex(this->real - B.real, this->image - B.image);
	}
	Complex operator --()
	{
		return Complex(this->real - 1, this->image);
	}
	Complex operator --(int)
	{
		return Complex(this->real - 1, this->image);
	}
};
int main()
{
	Complex c1(5.4, 1.1);
	Complex c2(5.8, -1.9);
	Complex c3 = c1 + c2;
	c1.display();
	c2.display();
	c3.display();
	c3++;
	c3.display();
	c1--.display();
	system("pause");
	return 0;
}