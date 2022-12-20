#include<iostream>
using namespace std;
void sort(double list[], int listsize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listsize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				double t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	const int maxn = 10;
	double list[maxn];
	cout << "please enter ten numbers";
	for (int i = 0; i < maxn; i++)
	{
		cin >> list[i];
	}
	sort(list, maxn);
	for (int i = 0; i < maxn; i++)
	{
		cout << list[i] << " ";
	}
}