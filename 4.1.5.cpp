#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1), len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)//�ҵ�һ����ͬ��
	{
		if (s1[0] == s2[i])//�ɹ��ҵ���ʼ��ͬ��
		{
			for (int j = 0; j < len1; j++)
			{
				if (s1[j] != s2[j + i])//���ֲ�ͬ
				{
					break;
				}
				if (j == len1 - 1)//ȫ���˶�
				{
					return i;
				}
			}
		}
	}
	return -1;//��һ����ͬ��δ�ҵ�
}
int main()
{
	const int maxn = 100;
	char s1[maxn], s2[maxn];
	cout << "Enter the first string:";
	cin.getline(s1, maxn);
	cout << "Enter the second string:";;
	cin.getline(s2, maxn);
	cout << "indexOf(��" << s1 << "��, ��" << s2 << "��) is " << indexOf(s1, s2);
	return 0;
}