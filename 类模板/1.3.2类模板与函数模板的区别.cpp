//#include <iostream>
//using namespace std;
//
//template <class NameType = string,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age) :m_name(name), m_age(age){}
//	void showPerson()
//	{
//		cout << this->m_name << " " << this->m_age << endl;
//	}
//	NameType m_name;
//	AgeType m_age;
//};
////类模板没有自动类型推导
//void test01()
//{
//	//Person p1("孙悟空", 1000);错误无法用自动类型推导
//	Person <string,int>p1("孙悟空", 1000);//只能用显示指定类型
//	p1.showPerson();
//}
////类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<>p2("猪八戒", 999);
//	p2.showPerson();
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}