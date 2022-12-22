#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
	int size;
	int top;
	T* space;
public:
	Stack(int = 10);
	~Stack()
	{
		delete[]space;
	}
	bool push(const T&);
	T pop();
	bool IsEmpty()const
	{
		return top == size;
	}
	bool IsFull()const
	{
		return top == 0;
	}
};

template<class T>
Stack<T>::Stack(int size)
{
	this->size = size;
	space = new T[size];
	top = size;
}
template<class T>
bool Stack<T>::push(const T& element)
{
	if (!IsFull())
	{
		space[--top] == element;
		return true;
	}
	return false;
}
template<class T>
T Stack<T>::pop()
{
	return space[top++];
}
int main()
{
	Stack<char>S1(4);
	S1.push('x');
	S1.push('y');
	S1.push('z');
	S1.push('u');
	S1.push('v');
	while (!S1.IsEmpty())
	cout << S1.pop() << endl;
	return 0;

}

/*template<class T_ID, class T_Score, int num>
class Student {
private:
	T_ID Student[num];
	T_Score score[num];
public:
	T_ID TopStudent{
		return Student[0];
	}
	int BelowNum(T_Score score) {
		return 0;
	}
};

template<class T1,class T2>
T1 add(T1 t1, T2 t2) {
	cout << "(" << sizeof(T1) << "," << sizeof(T2) << ")" << endl;
	return t1 + t2;
}

template<class T1,int T2>
int add_1(T1 t1) {
	return t1 + T2;
}

void main() {
	//cout << add<double>(8, 9) << endl;
	cout << add(8, 9) << endl;
	//cout << add_1<int, 9>(8) << endl;
	cout << add(8.0, 9.0) << endl;
	cout << add(8, 9.0) << endl;
	cout << add(8.0, 9) << endl;
	cout << add('A','A'-'0') << endl;
	cout << add(long double(8), 9) << endl;
}*/