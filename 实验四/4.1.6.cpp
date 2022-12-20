#include<iostream>
using namespace std;
const int letter = 26;
const int n = 100;
void count(const char s[], int counts[])
{
	for (int i = 0; i < letter; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;
	}
}
int main()
{
	char s[n];
	int counts[letter];
	cout << "Enter a string:";
	cin.getline(s, n);
	count(s, counts);
	for (int i = 0; i < letter; i++)
	{
		if (counts[i] != 0)
		{
			cout << char('a' + i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}