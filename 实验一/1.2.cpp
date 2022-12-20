#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "输入圆锥的底面半径：" << endl;
	int a;
	cin >> a;
	cout << "输入圆锥的高：" << endl;
	int b;
	cin >> b;
	cout << "输出圆锥体积；" << endl;
	float PI = 3.14;
	float c = 1 / 3.0 * b * pow(a, 2) * PI;
	cout << c << endl;
	return 0;
}