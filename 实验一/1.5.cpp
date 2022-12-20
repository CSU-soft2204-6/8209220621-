#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cin >> a;
	float b = (a - 32) / 1.80;
	cout << fixed << setprecision(2) << b << endl;
}