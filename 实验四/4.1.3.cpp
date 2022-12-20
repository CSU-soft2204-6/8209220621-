#include<iostream>
using namespace std;
void o_c(bool sum[], int n, int maxn)
{
	for (int i = n-1; i < maxn; i += n)
	{
		sum[i]=!sum[i];
	}
}
int main()
{
	const int maxn = 100;
	bool sum[maxn] = { 0 };
	for (int i = 1;i<=100; i++)
	{
		o_c(sum, i, maxn);
	}
	cout << "开着的柜子为";
	for (int i = 0; i < maxn; i++)
	{
		if (sum[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}