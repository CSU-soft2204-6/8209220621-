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
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; i++)
	{
		list3[i] = list2[i - size1];
	}
	sort(list3, size1 + size2);
}
int main()
{
	const int maxn = 80;
	int list1[maxn], list2[maxn], list3[maxn * 2],size1,size2;
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is:";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
	return 0;
}