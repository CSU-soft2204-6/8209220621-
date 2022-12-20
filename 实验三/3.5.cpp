#include<iostream>
using namespace std;
int npeach(int d, int n)
{
	if (d == 1)
	{
		return double(n+0.5);
	}
	else
	{
		n = (n + 1) * 2;
		d--;
		return npeach(d,n);
	}
}
int main()
{
	cout << npeach(10,1);
	return 0;
}