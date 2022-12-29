#include<iostream>
#include<string>
#include<set>
using namespace std;
template<class T>
void print(set<T>& set_con)
{
	if (set_con.empty())
		cout << "Container is empty!" << endl;
	else {
		set<T>::template iterator i; 
		for (i = set_con.begin(); i != set_con.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
	}
}
/*int main()
{
	string  stu_name[] = { "ChenHailing","LiuNa","CuiPeng" };
	set<string> str_set(stu_name, stu_name + 3);

	cout << "All student:" << endl;
	print(str_set);
	cout << "After insert:" << endl;
	str_set.insert("DingLong");
	print(str_set);
	cout << "After erase:" << endl;
	str_set.erase("ChenHailing"); 
	print(str_set);
	string search;
	set<string>::iterator it;
	cout << "Please input the student name for searching:" << endl;
	cin >> search;
	it = str_set.find(search);
	if (it == str_set.end())
		cout << "The " << search << " did not find!" << endl;
	else
		cout << "The " << search << " find!" << endl;
	return 0;
}*/