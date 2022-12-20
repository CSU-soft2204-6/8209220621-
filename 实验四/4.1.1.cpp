#include<iostream>
using namespace std;
bool is_exist(int n, int a[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (n == a[i])
		{
			return true;
			break;
		}
	}
	return false;
}
int main()
{
	const int maxn = 10;
	int a[maxn],t=0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < maxn; i++)
	{
		int n;
		cin >> n;
		if (is_exist(n, a,t) == 0)
		{
			a[t] = n;
			t++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < t ; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}