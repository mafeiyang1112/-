//#include <iostream>
////#include "person.cpp"一般不这样写
//#include "person.hpp"
//using namespace std;
//
////template <class T1, class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////	void showPerson();
////	T1 m_name;
////	T2 m_age;
////};
////template <class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_age = age;
////	this->m_name = name;
////}
////template <class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << this->m_name << " " << this->m_age << endl;
////}
//void test01()
//{
//	Person<string, int>p1("jeery", 18);
//	p1.showPerson();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}