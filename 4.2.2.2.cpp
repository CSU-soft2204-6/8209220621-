#include<iostream>
#include<cmath>
using namespace std;
const int maxn = 100;
int parseHex(const char* const hexString)
{
	int n=0,num[maxn],len=strlen(hexString);
	for (int i = 0; i < len; i++)
	{
		switch (hexString[i])
		{
		case 'A':
			num[i] = 10;
			break;
		case 'B':
			num[i] = 11;
			break;
		case'C':
			num[i] = 12;
			break;
		case'D':
			num[i] = 13;
			break;
		case'E':
			num[i] = 14;
			break;
		case'F':
			num[i] = 15;
			break;
		default:
			num[i] = int(hexString[i] - '0');
			break;
		}
	}
	for (int i = 0; i < len; i++)
	{
		n = n + num[i] * pow(16, len - i - 1);
	}
	return n;
}
int main()
{
	char hex[maxn];
	cout << "enter hex:";
	cin.getline(hex, maxn);
	cout << parseHex(hex);
	return 0;
}