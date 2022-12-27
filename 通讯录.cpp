#include<iostream>
#include<string>
#define max 100
using namespace std;
struct Person
{
	string name;
	int sex=0;
	int age=0;
	string phone;
	string addr;
};
struct Addressbook
{
	Person personarray[max];
	int size=0;
};
void showMenu()
{
	cout << "*************" << endl;
	cout << "1、添加联系人" << endl;
	cout << "2、显示联系人" << endl;
	cout << "3、删除联系人" << endl;
	cout << "4、查找联系人" << endl;
	cout << "5、修改联系人" << endl;
	cout << "6、清空联系人" << endl;
	cout << "0、退出通讯录" << endl;
	cout << "*************" << endl;
}
void add(Addressbook* abs)
{
	if (abs->size == max)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		string name;//输入姓名
		cout << "请输入名字" << endl;
		cin >> name;
		abs->personarray[abs->size].name = name;
		//输入性别
		cout << "请输入性别（1：男 2：女）" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->size].sex = sex;
				break;
			}
			cout << "输入有误" << endl;
		}
		int age;//输入年龄
		cout << "请输入年龄：" << endl;
		age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0)
			{
				abs->personarray[abs->size].age = age;
				break;
			}
			cout << "输入有误" << endl;
		}
		string phone;//输入电话
		cout << "请输入联系人电话：" << endl;
		cin >> phone;
		abs->personarray[abs->size].phone = phone;
		string addr;//输入姓名
		cout << "请输入联系人住址：" << endl;
		cin >> addr;
		abs->personarray[abs->size].addr = addr;
		abs->size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}
void showperson(Addressbook*abs)
{
	if (abs->size == 0)
	{
		cout << "暂未存储联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名：" << abs->personarray[i].name << " ";
			cout << "性别：" << (abs->personarray[i].sex==1?"男":"女") << " ";
			cout << "年龄：" << abs->personarray[i].age << " ";
			cout << "电话：" << abs->personarray[i].phone << " ";
			cout << "地址：" << abs->personarray[i].addr << endl;
		}
		system("pause");
		system("cls");
	}
}
int exist(Addressbook* abs,string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (name == abs->personarray[i].name)
			return i;
	}
	return -1;
}
void pdelete(Addressbook* abs)
{
	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	if (exist(abs, name) != -1)
	{
		int r = exist(abs, name);
		for (int i = r; i < abs->size; i++)
		{
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->size--;
		cout << name << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void psearch(Addressbook* abs)
{
	string name;
	cout << "请输入您查找的联系人" << endl;
	cin >> name;
	if (exist(abs, name) != -1)
	{
		int i = exist(abs, name);
		cout << "姓名：" << abs->personarray[i].name << " ";
		cout << "性别：" << (abs->personarray[i].sex == 1 ? "男" : "女") << " ";
		cout << "年龄：" << abs->personarray[i].age << " ";
		cout << "电话：" << abs->personarray[i].phone << " ";
		cout << "地址：" << abs->personarray[i].addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void pmodify(Addressbook* abs)
{
	cout << "请输入您想修改的联系人" << endl;
	string name;
	cin >> name;
	int r = exist(abs, name);
	if (r != -1)
	{
		cout << "请输入您要修改的内容（1.姓名 2.性别 3.年龄 4.电话 5.住址）" << endl;
		int i;
		switch (i)
		{
		case 1:
		{
			cout << "要修改为";
			string name;
			cin >> name;
			abs->personarray[r].name = name;
			break;
		}
		case 2:
		{
			cout << "要修改为";
			int sex;
			cin >> sex;
			abs->personarray[r].sex = sex;
			break;
		}
		case 3:
		{
			cout << "要修改为";
			int age;
			cin >> age;
			abs->personarray[r].age = age;
			break;
		}
		case 4:
		{
			cout << "要修改为";
			string phone;
			cin >> phone;
			abs->personarray[r].phone = phone;
			break;
		}
		case 5:
		{
			cout << "要修改为";
			string addr;
			cin >> addr;
			abs->personarray[r].addr = addr;
			break;
		}
		}
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void pclean(Addressbook* abs)
{
	cout << "是否确认清空（1.是 2.否）" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		abs->size = 0;
		cout << "通讯录已经清空" << endl;
	}
	if (a == 2)
	{
		cout << "已取消" << endl;
	}
	system("pause");
	system("cls");
}
int main()
{
	Addressbook abs;
	while(true)
	{
		showMenu();//展示菜单
		int select;
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人
		{
			add(&abs);
			break;
		}
		case 2://2、显示联系人
		{
			showperson(&abs);
			break;
		}
		case 3://3、删除联系人
		{
			pdelete(&abs);
			break;
		}
		case 4://4、查找联系人
		{
			psearch(&abs);
			break;
		}
		case 5://5、修改联系人
		{
			pmodify(&abs);
			break;
		}
		case 6://6、清空联系人
		{
			pclean(&abs);
			break;
		}
		case 0://0、退出通讯录
		{
			cout << "欢迎下次使用";
			system("pause");
			return 0;
			break;
		}
		default:
			break;
		}
	}
	system("pause");
	return 0;
}