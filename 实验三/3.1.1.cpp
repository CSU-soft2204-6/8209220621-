#include<iostream>
#include<cmath>
using namespace std;
int yue(int m, int n)
{
	int t = min(m,n);
	for (t; t > 0; t--)
	{
		if ((m % t == 0) && (n % t == 0))
			break;
	}
	return t;
}
int main()
{
	int m,n;
	cin >> m >> n;
	cout << yue(m, n);
	return 0;
}