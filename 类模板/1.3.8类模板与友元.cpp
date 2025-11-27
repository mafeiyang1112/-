#include<iostream>
using namespace std;

template<class T1, class T2>
class Person;
//类外实现，
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)//全局函数
{
	cout << "类外实现" << p.m_name << " " << p.m_age << endl;
}
template<class T1,class T2>
class Person
{
	friend void printPerson(Person<T1, T2>& p)//全局函数，用友元写在类内
	{
		cout << p.m_name << " " << p.m_age << endl;
	}

	friend void printPerson2<>(Person<T1, T2>& p);//普通全局函数,类外实现,加空模板参数列表
	
public:
	Person(T1 name, T2 age)
	{
		this->m_age = age;
		this->m_name = name;
	}
private:
	T1 m_name;
	T2 m_age;
};

void test01()
{
	Person<string, int>p1("Mafeiyang", 24);
	//printPerson(p1);
	printPerson2(p1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}