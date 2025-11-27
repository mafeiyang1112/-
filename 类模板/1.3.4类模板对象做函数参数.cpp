//#include <iostream>
//#include <string>
//using namespace std;
//
//
////类模板
//template<class T1,class T2>
//class Person
//{
//public:
//	Person (T1 name, T2 age):m_name(name),m_age(age){}
//	void showperson()
//	{
//		cout << this->m_name << " " << this->m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//};
////1.指定传入的类型
//void printPerson1(Person<string, int> &p)
//{
//	p.showperson();
//}
//void test01()
//{
//	Person<string, int> p("孙悟空", 1000);
//	printPerson1(p);
//}
////2.参数模板化
//template <class T1,class T2>
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showperson();
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int> p("猪八戒", 900);
//	printPerson2(p);
//}
////3.整个类模板化
//template<class T>//函数类，把类模板作为参数类型当作函数的参数类型
//void printPerson3(T &p)
//{
//	p.showperson();
//	cout << "T的类型为：" << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int> p("唐僧", 1000);
//	printPerson3(p);
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}