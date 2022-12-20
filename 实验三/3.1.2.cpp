#include<iostream>
using namespace std;
void fun(int& a,int& b,int m,int n)
{
	a = min(m, n);
	for (a; a > 0; a--)
	{
		if ((m % a == 0) && (n % a == 0))
			break;
	}
	b = max(m, n);
	for (b;; b++)
	{
		if ((b % m == 0) && (b % n == 0))
			break;
	}
}
int main()
{
	int m, n,a,b;
	cin >> m >> n;
	fun(a, b, m, n);
	cout << a <<"	"<<b;
	return 0;
}