#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1), len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)//找第一个相同点
	{
		if (s1[0] == s2[i])//成功找到初始相同点
		{
			for (int j = 0; j < len1; j++)
			{
				if (s1[j] != s2[j + i])//发现不同
				{
					break;
				}
				if (j == len1 - 1)//全部核对
				{
					return i;
				}
			}
		}
	}
	return -1;//第一个相同点未找到
}
int main()
{
	const int maxn = 100;
	char s1[maxn], s2[maxn];
	cout << "Enter the first string:";
	cin.getline(s1, maxn);
	cout << "Enter the second string:";;
	cin.getline(s2, maxn);
	cout << "indexOf(“" << s1 << "”, “" << s2 << "”) is " << indexOf(s1, s2);
	return 0;
}