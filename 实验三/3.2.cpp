#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1) 
	{
		return false;
	}
	for (int i = 2; i <= sqrt(num);i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	const int number = 200;
	const int line = 10;
	int n = 0, a = 2;
	for (n;n<number;a++)
	{
		if (is_prime(a))
		{
			n++;
			cout << a << " ";
			if (n % line == 0)
			{
				cout << "\n";
			}
		}
	}
	return 0;
}