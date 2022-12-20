#include<iostream>
using namespace std;
int main()
{
	const double price = 0.8;
	int day=0 ,n = 0,m=1;
	while (n < 100)
	{
		day++;
		m = m * 2;
		n = n + m;
	}
	cout << (n-m)*0.8 / (day-1);
}
