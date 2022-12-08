#include<iostream>
using namespace std;
void sort(int list[], int listsize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listsize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				int t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	int n;
	int* a = new int[5];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << " ";
	}
	delete[]a;
	return 0;
}