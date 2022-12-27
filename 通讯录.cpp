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
	cout << "1�������ϵ��" << endl;
	cout << "2����ʾ��ϵ��" << endl;
	cout << "3��ɾ����ϵ��" << endl;
	cout << "4��������ϵ��" << endl;
	cout << "5���޸���ϵ��" << endl;
	cout << "6�������ϵ��" << endl;
	cout << "0���˳�ͨѶ¼" << endl;
	cout << "*************" << endl;
}
void add(Addressbook* abs)
{
	if (abs->size == max)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		string name;//��������
		cout << "����������" << endl;
		cin >> name;
		abs->personarray[abs->size].name = name;
		//�����Ա�
		cout << "�������Ա�1���� 2��Ů��" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->size].sex = sex;
				break;
			}
			cout << "��������" << endl;
		}
		int age;//��������
		cout << "���������䣺" << endl;
		age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0)
			{
				abs->personarray[abs->size].age = age;
				break;
			}
			cout << "��������" << endl;
		}
		string phone;//����绰
		cout << "��������ϵ�˵绰��" << endl;
		cin >> phone;
		abs->personarray[abs->size].phone = phone;
		string addr;//��������
		cout << "��������ϵ��סַ��" << endl;
		cin >> addr;
		abs->personarray[abs->size].addr = addr;
		abs->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
void showperson(Addressbook*abs)
{
	if (abs->size == 0)
	{
		cout << "��δ�洢��ϵ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "������" << abs->personarray[i].name << " ";
			cout << "�Ա�" << (abs->personarray[i].sex==1?"��":"Ů") << " ";
			cout << "���䣺" << abs->personarray[i].age << " ";
			cout << "�绰��" << abs->personarray[i].phone << " ";
			cout << "��ַ��" << abs->personarray[i].addr << endl;
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
	cout << "����������" << endl;
	cin >> name;
	if (exist(abs, name) != -1)
	{
		int r = exist(abs, name);
		for (int i = r; i < abs->size; i++)
		{
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->size--;
		cout << name << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void psearch(Addressbook* abs)
{
	string name;
	cout << "�����������ҵ���ϵ��" << endl;
	cin >> name;
	if (exist(abs, name) != -1)
	{
		int i = exist(abs, name);
		cout << "������" << abs->personarray[i].name << " ";
		cout << "�Ա�" << (abs->personarray[i].sex == 1 ? "��" : "Ů") << " ";
		cout << "���䣺" << abs->personarray[i].age << " ";
		cout << "�绰��" << abs->personarray[i].phone << " ";
		cout << "��ַ��" << abs->personarray[i].addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void pmodify(Addressbook* abs)
{
	cout << "�����������޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int r = exist(abs, name);
	if (r != -1)
	{
		cout << "��������Ҫ�޸ĵ����ݣ�1.���� 2.�Ա� 3.���� 4.�绰 5.סַ��" << endl;
		int i;
		switch (i)
		{
		case 1:
		{
			cout << "Ҫ�޸�Ϊ";
			string name;
			cin >> name;
			abs->personarray[r].name = name;
			break;
		}
		case 2:
		{
			cout << "Ҫ�޸�Ϊ";
			int sex;
			cin >> sex;
			abs->personarray[r].sex = sex;
			break;
		}
		case 3:
		{
			cout << "Ҫ�޸�Ϊ";
			int age;
			cin >> age;
			abs->personarray[r].age = age;
			break;
		}
		case 4:
		{
			cout << "Ҫ�޸�Ϊ";
			string phone;
			cin >> phone;
			abs->personarray[r].phone = phone;
			break;
		}
		case 5:
		{
			cout << "Ҫ�޸�Ϊ";
			string addr;
			cin >> addr;
			abs->personarray[r].addr = addr;
			break;
		}
		}
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void pclean(Addressbook* abs)
{
	cout << "�Ƿ�ȷ����գ�1.�� 2.��" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		abs->size = 0;
		cout << "ͨѶ¼�Ѿ����" << endl;
	}
	if (a == 2)
	{
		cout << "��ȡ��" << endl;
	}
	system("pause");
	system("cls");
}
int main()
{
	Addressbook abs;
	while(true)
	{
		showMenu();//չʾ�˵�
		int select;
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
		{
			add(&abs);
			break;
		}
		case 2://2����ʾ��ϵ��
		{
			showperson(&abs);
			break;
		}
		case 3://3��ɾ����ϵ��
		{
			pdelete(&abs);
			break;
		}
		case 4://4��������ϵ��
		{
			psearch(&abs);
			break;
		}
		case 5://5���޸���ϵ��
		{
			pmodify(&abs);
			break;
		}
		case 6://6�������ϵ��
		{
			pclean(&abs);
			break;
		}
		case 0://0���˳�ͨѶ¼
		{
			cout << "��ӭ�´�ʹ��";
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